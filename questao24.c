#include <stdio.h>

/*. Escreva uma funcao que receba um array de inteiros V e os enderecos de duas variaveis
inteiras, min e max, e armazene nessas variaveis o valor mınimo e maximo do array. ´
Escreva tambem uma funcao main que use essa funcao. */ 

void confereMaxMin(int *vet, int *max, int *min){
  *max = vet[0];
  *min = vet[0];
  for (int j = 0; j < 6; j++){
    if (vet[j] > *max){
      *max = vet[j];
    }

    if (vet[j] < *min){
      *min = vet[j];
    }
  }
}

int main(void) {
  int vetor[6], MAX, MIN;

  for (int i = 0; i < 6; i++){
    printf("\nInserir Valor: ");
	  scanf("%d", &vetor[i]);
  }

  confereMaxMin(vetor, &MAX, &MIN);

  printf("\nValor MAXIMO: %d\tValor MINIMO: %d\n", MAX, MIN);
  return 0;
}
