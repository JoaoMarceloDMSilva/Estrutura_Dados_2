#include <stdio.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz. */

int main(void) {
  float matriz[3][3];

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("\nEndereço de memória [%d][%d]: %p", i, j, &matriz[i][j]);
    }
  }
  return 0;
}
