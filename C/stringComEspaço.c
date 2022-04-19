/*
    É o exemplo do uso dos [], que vai ler os caracteres até encontrar
    uma nova linha, onde também, vai servir para finalizar a leitura do scanf().

    OBS: Usar o SETBUF é importante para limpar o buffer de entrada, nesse exemplo
    ele realmente não faz diferença, mas em algoritmos usando loops entre outros,
    vai ocorrer problemas.

    By: zDragonSK - Nirvax
 */

// Headers
#include <stdio.h>

// Funçoes
int main(void){
    char name[21];

    printf("Digite uma string de até 20 chars usando espaço.\n\nDigite um nome:\t ");
    scanf("%[^\n]", &name); // Leitura
    setbuf(stdin, NULL);    // Limpar o buffer de entrada.

    printf("\nDigitou; %s\n", name);
    return 0;
}
