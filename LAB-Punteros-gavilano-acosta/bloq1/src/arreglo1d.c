#include <stdio.h>
#define LENGTH 10

int main() {
  int datos[LENGTH];
  printf("Ingrese %d enteros\n", LENGTH);
  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &datos[i]);
  }

  double suma = 0;
  int max[2] = {0, -1};
  int min[2] = {0, -1};
  int pares = 0;
  int impares = 0;

  for (int i = 0; i < LENGTH; i++) {
    suma += (float)datos[i];
    if (max[0] < datos[i]) {
      max[0] = datos[i];
      max[1] = i;
    }
    if (datos[i] % 2 == 0) pares++;
    else impares++;
  }
  min[0] = max[0];
  for (int i = 0; i < LENGTH; i++) {
    if (min[0] > datos[i]) {
      min[0] = datos[i];
      min[1] = i;
    }
  }

  printf("Suma\t: %d\n", (int)suma);
  printf("Promedio\t: %lf\n", suma / LENGTH);
  printf("Minimo\t: %d (indice %d)\n", min[0], min[1]);
  printf("Maximo\t: %d (indice %d)\n", max[0], max[1]);
  printf("Pares\t: %d\n", pares);
  printf("Impares\t: %d\n", impares);
  printf("Original\t: ");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d%c ", datos[i], ((i != LENGTH - 1) ? ',' : ' '));
  }
  printf("\n");
  printf("Invertido\t: ");
  for (int i = LENGTH - 1; i >= 0; i--) { // falta invertir de verdad, probablemente swapeando las variables de los indices extremos e ir acercandose al centro cada vez
    printf("%d%c ", datos[i], ((i != 0) ? ',' : ' '));
  }

  // printf("\n\n");
  // printf("%d\n", datos[1]);
  // printf("%d", *(datos + 1));

  return 0;
}

