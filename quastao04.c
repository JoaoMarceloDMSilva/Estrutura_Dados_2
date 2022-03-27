#include <stdio.h>

void troca_inteiros (int *ptr_inteiro_1, int *ptr_inteiro_2){
  int auxiliar;
  auxiliar = *ptr_inteiro_1;
  *ptr_inteiro_1 = *ptr_inteiro_2;
  *ptr_inteiro_2 = auxiliar;
}

int main(void) {
  int num_inteiro_1 = 10, num_inteiro_2 = 5;

  printf("Primeiro número: %d\tSegundo número: %d\n", num_inteiro_1, num_inteiro_2);
  troca_inteiros(&num_inteiro_1, &num_inteiro_2);
  printf("Primeiro número: %d\tSegundo número: %d\n\n", num_inteiro_1, num_inteiro_2);

  return 0;
}
