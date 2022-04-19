/*
  Converter arrays de caracteres ("strings"), para números inteiros.

  By: zDragonSK - Nirvax
*/

#include <stdio.h>
#include <stdlib.h>

void main(void){
  char valor_str[] = "15";     // Valor em array de chars
  int valor = atoi(valor_str); // Convertendo o valor com ATOI()

  printf("Valor final: %i\n", valor);
}
