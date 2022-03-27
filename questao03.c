#include <stdio.h>

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e exiba o conteudo do maior endereço*/

int main(void) {
  int num1, num2;

  printf("\nAdicione uma valor para 'num1': ");
  scanf("%d", &num1);
  printf("\nAdicione uma valor para 'num2': ");
  scanf("%d", &num2);

  if((&num1) > (&num2)){
    printf("\nO maior endereço é num1: %d", num1);
  }else{
    printf("\nO maior endereço é num2: %d", num2);
  }
  return 0;
}
