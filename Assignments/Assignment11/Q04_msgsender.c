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
    for (int i = 1; i <= 4; i++)
    {
        message.msg_type = 1;
        snprintf(message.msg_text, MAX, "Message %d", i);
        if (msgsnd(msgid, &message, sizeof(message.msg_text),
                   0) == -1)
        {
            perror("msgsnd");
            exit(1);
        }
        printf("Sent: %s\n", message.msg_text);
    }
    return 0;
}