#include <stdio.h>

/*Crie uma funcao que receba como parametro um array e o imprima. N ao utilize ındices para percorrer o array, apenas aritmetica de ponteiros.*/

void imprimir (int vetor[]){
  for(int i=0; i < 5; i++){
    printf("\n%d ", *(vetor +i));
  }
}

int main(void) {
  int vetor [5], num;

  for (int i = 0; i < 5; i++){
    printf("\nInserir Valor: ");
	  scanf("%d", &vetor[i]);
  }
 
  imprimir(vetor);
  
  return 0;
}
