#include <stdio.h>

/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/

int main(void) {
  float elementos [10];

  for (int i = 0; i < 10; i++){
    printf("\nEndereço de memória %d: %p", i, &elementos[i]);
  }
  return 0;
}
