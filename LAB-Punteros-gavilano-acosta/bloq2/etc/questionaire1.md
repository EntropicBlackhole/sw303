# CUESTIONARIO (punteros-basicos.c)

## a) ¿Por qué `printf("%p", p)` requiere el cast `(void*)`?

Esto ocurre porque, en ciertas arquitecturas, los diferentes tipos de punteros de C se almacenan de forma diferente y, como `printf` espera un tipo `(void*)`, técnicamente esto activa **comportamiento indefinido**.

Curiosamente, el compilador no se queja mientras no se utilice la instrucción `-Wpedantic`, ya que todos los sistemas modernos tratan todos los tipos de punteros de C como el mismo tipo `(void*)`.

## b) ¿Qué diferencia hay entre `int *p` e `int* p`?

**Ninguna.** El compilador de C ignora los espacios en blanco, pues únicamente toma en cuenta las *keywords* y las convierte en *tókens*. Como el prefijo puntero `*` es una keyword en sí, C separa las dos keywords automáticamente.

No obstante, es recomendable usar la forma `int *p`, debido a que al declarar varias variables puntero a la vez, sólo aquellas con el prefijo puntero serán declaradas como punteros.

```C
// Se declara *p, *r como punteros, pero q como int.
int *p, q, *r
```