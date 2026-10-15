#include <stdio.h>
#include "racional.h"

int main() {
  // printf("%d", mcd(24, 24));
  int n1, d1, n2, d2;
  // simplificar(&n1, &d1);
  // printf("%d/%d", n1, d1);
  printf("Ingrese dos fracciones\n");
  printf("numerador #1: ");
  scanf("%d", &n1);
  printf("denominador #1: ");
  scanf("%d", &d1);
  printf("numerador #2: ");
  scanf("%d", &n2);
  printf("denominador #2: ");
  scanf("%d", &d2);

  int n_resultado, d_resultado;
  sumar(n1, d1, n2, d2, &n_resultado, &d_resultado);

  printf("suma de ambas fracciones: %d/%d", n_resultado, d_resultado);
  return 0; 
}

// 4 / 6 + 5 / 4
// 16 / 24 + 30 / 24
// 46 / 24
// 23 / 12