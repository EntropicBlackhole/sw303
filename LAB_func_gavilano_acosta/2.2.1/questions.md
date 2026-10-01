1. Qué contiene el `.h` y qué no debe contener?
    Contiene las declaraciones de las funciones empleadas, mas no sus definiciones o implementaciones.

2. ¿Por qué el `.h` no debe tener definiciones de funciones (salvo `static inline` en casos avanzados)?
    Para evitar definiciones duplicadas, dado el caso en que múltiples archivos utilicen la librería y, por ende, al enviar al linker, el compilador vea múltiples definiciones (repetidas) de las mismas funciones.

3. ¿Para qué sirven las directivas (`#ifndef`/`#define`/`#endif`)?
    `#indef __FOO__` es un bloque condicional que solo se ejecuta si el valor cuestionado no está definido al momento de compilar. El final del bloque condicional se marca con `#endif`.
    En nuestro programa, este bloque evita que se declaren las funciones del archivo de cabecera múltiples veces, al definir un valor `RAIZ_DIGITAL_H` y verificar si este ya existía antes de declarar las funciones.

4. ¿Por qué `main.c` solo necesita incluir `raiz_digital.h`?
    Porque el compilador solo espera que la función esté declarada, no definida. Las definiciones están por separado en `raiz_digital.c`, el cual se añade a través del *linker*.
 