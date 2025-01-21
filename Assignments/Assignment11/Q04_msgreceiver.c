#include <stdio.h>
#include <stdlib.h>
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
    while (msgrcv(msgid, &message,
                  sizeof(message.msg_text), 1, 0) != -1)
    {
        printf("Received: %s\n", message.msg_text);
    }
    if (msgrcv(msgid, &message, sizeof(message.msg_text), 1,
               IPC_NOWAIT) == -1)
    {
        perror("msgrcv");
    }
    if (msgctl(msgid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }
    return 0;
}