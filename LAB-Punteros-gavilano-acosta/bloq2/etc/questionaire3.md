# CUESTIONARIO 3 (punteros-char.c)

## a) ¿Cuál es la diferencia entre `char *s = "..."` y `char s[] = "..."` en términos de memoria?

El puntero de caracter `char *s` se crea en el **heap**, lo que le permite crecer dinámicamente (hasta cierto punto), pero el `char s[]` se crea en el **stack**, lo que lo hace de tamaño fijo (como un arreglo).

## b) ¿Por qué intentar modificar un literal de cadena es comportamiento no definido?

Esto ocurre porque el `char *s` se guarda en el módulo `.rodata`, el cual es memoria de **solo lectura**, por lo que intentar modificarlo es comportamiento indefinido.

## c) ¿Cuándo conviene cada declaración?

Para cadenas de texto constantes, conviene declararlas como punteros, pero en caso de necesitar modificarlas, se requiere un arreglo. También hay que considerar que los arreglos son de longitud fija.