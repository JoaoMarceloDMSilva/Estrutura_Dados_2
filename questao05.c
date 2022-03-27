#include <stdio.h>

void troca_inteiros (int *ptr1, int *ptr2){
  int auxiliar;
  if (*ptr1 < *ptr2){
    auxiliar = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = auxiliar;
  }
}

int main(void) {
  int num1, num2;

  printf("\nAdicione uma valor para 'num1': ");
  scanf("%d", &num1);
  printf("\nAdicione uma valor para 'num2': ");
  scanf("%d", &num2);
  printf("\nnum1: %d\t\tnum2: %d\n", num1, num2);
  
  troca_inteiros(&num1, &num2);
  printf("\nMaior valor (num1): %d\tMenor valor (num2): %d\n", num1, num2);

  return 0;
}
