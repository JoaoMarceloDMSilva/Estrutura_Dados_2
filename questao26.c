#include <stdio.h>
#include <math.h>

/*Implemente uma funcao que calcule as raızes de uma equac¸ao do segundo grau do tipo ˜
Ax2 + Bx + C = 0. Lembrando que:
X =−B ±√∆/2A
Onde
∆ = B^2 − 4AC
A variavel A tem que ser diferente de zero. 
• Se ∆ < 0 nao existe real. ˜
• Se ∆ = 0 existe uma raiz real.
• Se ∆ ≥ 0 existem duas ra´ızes reais.
Essa func¸ao deve obedecer ao seguinte prot ˜ otipo: ´
int raizes(float A,float B,float C,float * X1,float * X2);
Essa func¸ao deve ter como valor de retorno o numero de raızes reais e distintas da
equac¸ao. Se existirem raizes reais, seus valores devem ser armazenados nas variaveis 
apontadas por X1 e X2.*/

int raizes(float A,float B,float C,float * X1,float * X2){
  float DELTA, raizDelta;
  int quantRaizReal;

  DELTA = (B*B) - (4*A*C);
  raizDelta = sqrt(DELTA);
  
  if (DELTA < 0){
    printf("\nNão existe raízes reais.");
    return quantRaizReal = 0;
  }

  if (DELTA == 0){
    quantRaizReal = 1;
  }
  
  if (DELTA > 0){
    quantRaizReal = 2;
  }

  *X1 = ((-1 * B) + raizDelta)/(2*A);
  *X2 = ((-1 * B) - raizDelta)/(2*A);

  return quantRaizReal;
}

int main(void) {
  float a, b , c, x1, x2;
  int quantReais;

  printf("\nInforme o valor de A: ");
  scanf("%f", &a);
  printf("\nInforme o valor de B: ");
  scanf("%f", &b);
  printf("\nInforme o valor de C: ");
  scanf("%f", &c);

  quantReais = raizes(a,b,c,&x1,&x2);

  printf("\nX1: %.3f\tX2: %.3f\n",x1,x2);
  printf("Reais %d", quantReais);
  return 0;
}
