#include <stdio.h>

/*Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
array. A funcao devera preencher os elementos de array com esse valor. Nao utilize
ındices para percorrer o array, apenas aritmetica de ponteiros. */

void preenche(int v[], int N){
  for(int i=0; i < 10; i++){
   *(v+i)= N;
  }
}

void imprimir (int vetor[]){
  for(int i=0; i < 10; i++){
    printf("\n%d ", *(vetor +i));
  }
}

int main(void) {
  int vetor [10], num;
  
  printf("\nValor I: ");
  scanf("%d", &num);
  
  preenche(vetor, num);
  imprimir(vetor);
  
  return 0;
}
