# CUESTIONARIO (aritmetica.c)

## a) `p + 5` no suma 5 bytes, sino `5 * sizeof(int)` bytes. Verifique imprimiendo `(char *p)` y `(char *)(p+5)` y calculando la diferencia en bytes.

Sí, al operar punteros, el valor "entero" que se suma corresponde a un múltiplo del tamaño en bytes del tipo de variable del puntero (por esto es que existe `int*`, `float*`, `char*`, ...).

## b) ¿Por qué `p[i]` es exactamente `*(p + i)`?

Esto es debido a que los arreglos se guardan de forma continua en un espacio de memoria, es decir, el siguiente valor en el arreglo está inmediatamente después en la memoria. Por eso al sumar `i` al arreglo (el cual es un puntero al primer elemento) y derreferenciar, devuelve `p[i]`.

## c) ¿Por qué `3[p]` compila?

El compilador C traduce toda indexación de un arreglo a una operación con punteros. Como el operador `+` es conmutativo, es lo mismo operar `p + 3`, o al contrario, `3 + p`, por lo que el compilador no ve diferencia entre `p[3]` y `3[p]`.

## d) ¿Qué pasa con `p + 8`?

Sí es válido, principalmente porque es simplemente un puntero a una ubicación de la memoria que **sí existe**. El problema es que derreferenciarlo se sale del arreglo, por lo que obtendremos un *valor basura* o un valor correspondiente a otra variable (probablemente la declarada inmediatamente después).