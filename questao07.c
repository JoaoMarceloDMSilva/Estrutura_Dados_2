#include <stdio.h>

/*Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.*/

void soma(int *ptr1, int *ptr2){
  *ptr1 = (*ptr1) + (*ptr2);
}

int main(void) {
  int A, B;

  printf("\nInforme um valor para A: ");
  scanf("%d", &A);
  printf("\nInforme um valor para B: ");
  scanf("%d", &B);

  printf("\nValor em A: %d", A);
  printf("\nValor em B: %d", B);
  soma(&A, &B);
  printf("\nSoma: %d", A);
  return 0;
}
