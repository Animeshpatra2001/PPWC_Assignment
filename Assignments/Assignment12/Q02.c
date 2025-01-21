#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
int main()
{
    struct sockaddr_in servaddr, cliaddr;
    char serv_ip[INET_ADDRSTRLEN], cli_ip[INET_ADDRSTRLEN];
    int serv_port, cli_port;
    printf("Enter server IP and port: ");
    scanf("%s %d", serv_ip, &serv_port);
    printf("Enter client IP and port: ");
    scanf("%s %d", cli_ip, &cli_port);

    inet_pton(AF_INET, serv_ip, &servaddr.sin_addr);
    inet_pton(AF_INET, cli_ip, &cliaddr.sin_addr);
    servaddr.sin_family = cliaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(serv_port);
    cliaddr.sin_port = htons(cli_port);
    printf("Server IP: %s\nServer Port: %d\nClient IP: %s\nClient Port:
               % d\n ",
               serv_ip,
           serv_port, cli_ip, cli_port);
    return 0;
}