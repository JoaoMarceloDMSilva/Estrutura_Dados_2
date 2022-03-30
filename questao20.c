#include <stdio.h>

/*Implemente uma func¸ao que receba como parametro um array de numeros reais de
tamanho N e retorne quantos numeros negativos ha nesse array. Essa funcao deve
obedecer ao prototipo:
int negativos(float *vet, int N);*/

int negativos (float *vet, int N){
  int contador = 0;
  for (int j  = 0; j < N; j++){
    if (vet[j] < 0){
      contador++;
    }
  }

  return contador;
}

int main(void) {
  float vetor[5];
  int quantNegativos;
  for (int i = 0; i < 5; i++){
    printf("\nInserir Valor: ");
	  scanf("%f", &vetor[i]);
  }

  quantNegativos = negativos(vetor, 5);

  printf("\nQuantidade de Negativos: %d \n", quantNegativos);
	
  return 0;
}
