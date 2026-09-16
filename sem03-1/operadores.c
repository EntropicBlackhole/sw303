#include <stdio.h>

int main() { 
  int a = 25, b = 7, c = 129;
  printf("operadores aritmeticos\n");
  printf("la suma de %d + %d es %d\n", a, b, a + b);
  printf("la resta de %d - %d es %d\n", a, b, a - b);
  printf("el producto de %d * %d es %d\n", a, b, a * b);
  printf("la division entera de %d / %d es %d\n", a, b, a / b);
  printf("la division real de %d / %d es %f\n", a, b, (float)a / b);
  printf("\n");
  printf("operadores de comparacion\n");
  printf("a = %d\nb = %d\nc = %d\n", a, b, c);
  printf("%d > %d? es %d\n", a, b, a > b);
  printf("%d > %d? es %d\n", b, c, b > c);
  printf("%d > %d y %d > %d? es %d\n", a,b,b,c, (a > b) && (b > c));
  printf("%d > %d o %d > %d? es %d\n", b,c,c,a, (b > c) || (c > a));
  printf("\n");
}