#include <stdio.h>
#include <string.h>

/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, 
real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada 
variável usando os ponteiros. Imprima os valores das variáveis antes e apos a modificação.*/

void troca_inteiros (int *ptr_inteiro_1, int *ptr_inteiro_2){
  int auxiliar;
  auxiliar = *ptr_inteiro_1;
  *ptr_inteiro_1 = *ptr_inteiro_2;
  *ptr_inteiro_2 = auxiliar;
}

void troca_reais (float *ptr_real_1, float *ptr_real_2){
  float auxiliar;
  auxiliar = *ptr_real_1;
  *ptr_real_1 = *ptr_real_2;
  *ptr_real_2 = auxiliar;
}

void troca_caracter (char *ptr_caracter_1, char *ptr_caracter_2){
  char auxiliar;
  auxiliar = *ptr_caracter_1;
  *ptr_caracter_1 = *ptr_caracter_2;
  *ptr_caracter_2 = auxiliar;
}

int main(void) {
  int num_inteiro_1 = 10, num_inteiro_2 = 5;
  float num_real_1 = 3.33, num_real_2 = 6.67;
  char caracter_1 = 'J', caracter_2 = 'M';

  printf("Primeiro número: %d\tSegundo número: %d\n", num_inteiro_1, num_inteiro_2);
  troca_inteiros(&num_inteiro_1, &num_inteiro_2);
  printf("Primeiro número: %d\tSegundo número: %d\n\n", num_inteiro_1, num_inteiro_2);

  printf("Primeiro número: %.2f\tSegundo número: %.2f\n", num_real_1, num_real_2);
  troca_reais(&num_real_1, &num_real_2);
  printf("Primeiro número: %.2f\tSegundo número: %.2f\n\n", num_real_1, num_real_2);

  printf("Primeiro caracter: %c\tSegundo caracter: %c\n", caracter_1, caracter_2);
  troca_caracter(&caracter_1, &caracter_2);
  printf("Primeiro caracter: %c\tSegundo caracter: %c\n\n", caracter_1, caracter_2);
  return 0;
}
