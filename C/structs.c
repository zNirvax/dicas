/*
  Usando estruturas em C

  By: zDragonSK - Nirvax
*/

#include <stdio.h>
#include <stdlib.h>

// Criando a estrutura com seus valores
struct registro{
    char nome[56];
    int idade;
};

int main(void){
    // Declarando uma estrutura
    struct registro pessoa;

    // Lendo o valor NOME da estrutura
    printf("Digite um nome: ");
    scanf("%s", pessoa.nome);

    // Lendo o valor IDADE da estrutura
    printf("Digite sua idade: ");
    scanf("%i", &pessoa.idade);

    printf("Você é %s e tem %i anos.\n", pessoa.nome, pessoa.idade);
    return 0;
}
