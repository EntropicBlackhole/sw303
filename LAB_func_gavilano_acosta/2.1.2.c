#include <stdio.h>
int incrementar(int x) {
  int y = x + 1;
  printf("Dentro de incrementar: x = %d\n", y);
  return y;
}
int main(void) {
  int n = 10;
  n = incrementar(n);
  printf("Despues de llamar: n = %d\n", n);  // ¿10 o 11?
  return 0;
}

/* segunda solucion con variable global

#include <stdio.h>
int n = 10;
void incrementar() {
  n = n + 1;
  printf("Dentro de incrementar: x = %d\n", n);
}
int main(void) {
  // int n = 10;
  incrementar();
  printf("Despues de llamar: n = %d\n", n);  // ¿10 o 11?
  return 0;
}

*/