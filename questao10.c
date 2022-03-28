#include <stdio.h>

/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido. */

void imprimir (int vetor[], int tamanho){
  for(int i=0; i < tamanho; i++){
    printf("%d ", (*(vetor +i))*2);
  }
}

int main(void) {
  int vetor[5];

  for (int i = 0; i < 5; i++){
    printf("\nInsira um valor para [%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  imprimir(vetor,5);
  return 0;
}
