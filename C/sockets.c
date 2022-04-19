/*
    Usando Sockets em C para conexão TCP/IP
    O source segue o padrão comum encontrado na web.
        By: zDragonSK - Nirvax
*/
#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h> // Necessario para o "inet_addr" no address

int main(void){
    int mysocket, conectar;
    struct sockaddr_in alvo; // Estrutura do cliente

    // Montando estrutura do socket
    mysocket = socket(AF_INET, SOCK_STREAM, 0); // criando socket
    alvo.sin_family = AF_INET;                  // Declarando familia
    alvo.sin_port = htons(80);                  // Declarando PORTA da conexão

    // Declarando endereço da conexão
    alvo.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Criando a conexão
    conectar = connect(mysocket, (struct sockaddr *)&alvo, sizeof(alvo));

    // Checando o sucesso da conexão

    if (conectar != 0){
        fprintf(stderr, "Porta Fechada ou endereço não existe!\n");
        return 1;
    }
    printf("Conexão feita!\n");
    
    // Fechando conexão
    close(mysocket);
    close(conectar);
    
    return 0;
}
