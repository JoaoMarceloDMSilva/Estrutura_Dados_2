#include <stdio.h>

#define PI 3.14

void calc_esfera (float r, float *area, float *volume){
  *area = 4 * PI * (r*r);
  *volume = (4 * PI * (r*r*r))/3;
}

int main(void) {
  float raio, resultArea, resultVol;

  printf("Informe o raio (R) da esfera:\n ");
  scanf("%f", &raio);

  calc_esfera(raio, &resultArea, &resultVol);

  printf("Area da esfera: %.3f u.a\n", resultArea);
  printf("Volume da esfera: %.3f u.v\n", resultVol);

  return 0;
}
