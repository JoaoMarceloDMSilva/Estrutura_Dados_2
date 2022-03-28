#include <stdio.h>

/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

int main(void) {
  int vetor[5];

  for (int i = 0; i < 5; i++){
    printf("\nInsira um valor para [%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for (int j = 0; j < 5; j++){
    if ((vetor[j] % 2) == 0){
      printf("\nEndereço com numero par de [%d] : %p", j,&vetor[j]);
    }
  }
  return 0;
}
