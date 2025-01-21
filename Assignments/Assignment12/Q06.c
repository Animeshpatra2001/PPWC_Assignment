#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
int main()
{
    int port;
    printf("Enter a port address:");
    scanf("%d", &port);
    struct sockaddr_in servaddr;
    servaddr.sin_family =
        AF_INET;
    servaddr.sin_port = htons(port);
    printf("Port=%d\n",
           ntohs(servaddr.sin_port));
    return 0;
}

/*
Output
Enter a port address: 16
Port=16
Enter a port address: 67
Port=67
Enter a port address:
879 Port=879
*/