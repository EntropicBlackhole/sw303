#include <stdio.h>
#include <math.h>
#define TOLERANCIA 1e-6

int main() {
  float suma = 0;
  float termino_actual = 1.0;
  int c = 2;
  float n = -1; //es negativo
  for (;;) {
    suma += termino_actual;
    termino_actual = n/c;
    n *= -1;
    c++;
    // printf("suma: %f\n", suma);
    // printf("termino_actual: %f\n\n", termino_actual);
    if (fabs(termino_actual) <= TOLERANCIA) break;
  }
  printf("tolerancia: 1e-6\n");
  printf("iteraciones: %d\n", c-1);
  printf("suma calculada: %f\n", suma);
  printf("ln(2) esperado: %f\n", log(2.0));
  printf("error absoluto: %f", fabs(suma - log(2.0)));
  return 0;
}