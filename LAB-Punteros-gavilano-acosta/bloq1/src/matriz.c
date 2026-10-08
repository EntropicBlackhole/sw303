#include <stdio.h>
#define FIL 3
#define COL 4
#define k 2

int main() {
  int m[FIL][COL];
  int sFil = 0;
  int sCol = 0;
  int sTotal = 0;

  for (int i = 0; i < FIL; i++) {
    printf("Ingrese %d enteros para la fila %d:\n", COL, i+1);
    for (int j = 0; j < COL; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  printf("Matrix %dx%d\n", FIL, COL);
  for (int i = 0; i < FIL; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%4d", m[i][j]);
      sFil += m[i][j];
    }
    printf("\t| suma fila = %d\n", sFil);
    sTotal += sFil;
    sFil = 0;
  }
  for (int i = 0; i < COL * 4; i++) {
    printf("-");
  } 
  printf("-\n");
  for (int i = 0; i < COL; i++) {
    for (int j = 0; j < FIL; j++) {
      sCol += m[j][i];
    }
    printf("%4d", sCol);
    sCol = 0;
  }
  printf("\t(sumas de columnas)\n\n");
  printf("Suma total: %d\n\n", sTotal);

  printf("Transpuesta %dx%d\n", COL, FIL);
  for (int i = 0; i < COL; i++) {
    for (int j = 0; j < FIL; j++) printf("%4d", m[j][i]);
    printf("\n");
  }

  printf("\n\n");
  printf("Escalar k = %d\n", k);
  for (int i = 0; i < FIL; i++) {
    for (int j = 0; j < COL; j++) printf("%4d", k * m[i][j]);
    printf("\n");
  }

  printf("%d\n", &m[0][0]);
  printf("%d\n", &m[0][1]);
  printf("%d\n", &m[1][0]);

  return 0;
}
