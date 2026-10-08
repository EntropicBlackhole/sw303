# CUESTIONARIO 1 (malloc-calloc.c)

## a) ¿Cuál es la diferencia fundamental entre `malloc` y `calloc`?

La diferencia radica en que `malloc` no inicializa los valores a `0`, mientras que `calloc` sí. Conviene usar `calloc`, a no ser que vayamos a inicializar los valores de la región de memoria inmediatamente.

## b) ¿Por qué se prefiere `calloc(n, size)` sobre `malloc(n * size)` y `memset(..., 0, ...)`?

La función `calloc` es más segura, pues si `n * size` ocasiona un **overflow**, se devolverá `NULL` apropiadamente.

## c) ¿Qué devuelve `malloc` si no se puede reservar?

A diferencia de `calloc`, `malloc` devuelve *NULL*, pero coloca el valor `errnomem`. Si intentas acceder a este puntero, el programa se rompe, pero sí compilará.