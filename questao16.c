#include <stdio.h>

/*Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que leia a
variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas 
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo. */

int main(void) {
  int A;
  int *B = &A;
  int **C = &B;
  int ***D = &C;
  
	printf("\nInserir Valor: ");
	scanf("%d", &A);
	printf("\nDobro: %d", (*B * 2));
	printf("\nTriplo: %d", (**C * 3));
	printf("\nQuadruplo: %d", (***D * 4));
  
  return 0;
}
