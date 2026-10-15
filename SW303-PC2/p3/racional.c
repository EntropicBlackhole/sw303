#include <stdio.h>
#include "racional.h"

int mcd(int a, int b) {
  if (a == b) return a;
  int max = 0;
  int maxNum = (a < b ? b : a);
  int minNum = (a < b ? a : b);
  // printf("%d, %d\n", maxNum, minNum);

  for (int i = 1; i <= maxNum; i++) {
    // printf("iteracion %d de %d\n", i, maxNum);
    if (maxNum % i == 0) {
      // printf("%d es un divisor de %d\n", i, maxNum);
      if (minNum % i == 0) {
        // printf("%d tmb es un divisor de %d\n", i, minNum);
        if (i > max) {
          max = i;
          // printf("max ahora es %d\n", max);
        };
      }
    }
  }
  // printf("%d", max);
  return max;
};
void simplificar(int* num, int* den) {
  int n = *num;
  int d = *den;

  int m = mcd(n, d);

  n /= m;
  d /= m;

  *num = n;
  *den = d;
};
void sumar(int n1, int d1, int n2, int d2, int* n_res, int* d_res) {
  int new_n1 = n1 * d2;
  int new_n2 = n2 * d1; 
  int new_d = d1 * d2;
  int new_n = new_n1 + new_n2;

  simplificar(&new_n, &new_d);

  *n_res = new_n;
  *d_res = new_d;
};