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
void receive_message(int msgid, long msgtyp)
{
    if (msgrcv(msgid, &message, sizeof(message.msg_text),
               msgtyp, 0) != -1)
    {
        printf("Received: %s\n", message.msg_text);
    }
    else
    {
        perror("msgrcv");
    }
}
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
    long msg_types[] = {-10, 100, -46, 0, 88};
    for (int i = 0; i < 5; i++)
    {
        receive_message(msgid, msg_types[i]);
    }
    if (msgctl(msgid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }
    return 0;
}