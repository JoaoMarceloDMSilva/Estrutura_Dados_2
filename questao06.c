#include <stdio.h>

/*Elaborar um programa que leia dois valores inteiros (A e B). 
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. 
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.*/

int somaDobro (int *ptr1, int *ptr2){
  int resultSoma;
  *ptr1 = *ptr1 * 2;
  *ptr2 = *ptr2 * 2;
  resultSoma = (*ptr1) + (*ptr2);

  return resultSoma;
}

int main(void) {
  int num1, num2, somaResult;

  printf("\nAdicione uma valor para 'num1': ");
  scanf("%d", &num1);
  printf("\nAdicione uma valor para 'num2': ");
  scanf("%d", &num2);
  printf("\nnum1: %d\t\tnum2: %d\n", num1, num2);
  
  somaResult = somaDobro(&num1, &num2);
  printf("\nA soma do dobro num1 + num2: %d\n", somaResult);

  return 0;
}
