#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 100
struct msg_buffer
{
    long msg_type;
    char msg_text[MAX];
} message;
int main()
{
    key_t key;
    int msgid;
    key = ftok("msgqueuefile", 65);
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1)
    {
        perror("msgget");
        exit(1);
    }
    long msg_types[] = {10, 30, 46, 67, 78, 88};
    for (int i = 0; i < 6; i++)
    {
        message.msg_type = msg_types[i];
        snprintf(message.msg_text, MAX, "Message of type %ld",
                 msg_types[i]);
        if (msgsnd(msgid, &message, sizeof(message.msg_text), 0) == -1)
        {
            perror("msgsnd");
            exit(1);
        }
        printf("Sent: %s\n", message.msg_text);
    }
    return 0;
}