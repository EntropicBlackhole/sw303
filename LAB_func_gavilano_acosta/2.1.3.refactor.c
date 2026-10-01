#include <stdio.h>
// int contador = 0;  // VARIABLE GLOBAL
int incrementar(int contador) { return contador + 1; }
int main(void) {
  int contador = 0;
  contador = incrementar(contador);
  contador = incrementar(contador);
  contador = incrementar(contador);
  printf("contador = %d\n", contador);
  return 0;
}
