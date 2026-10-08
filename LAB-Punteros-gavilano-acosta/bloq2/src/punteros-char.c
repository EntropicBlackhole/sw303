#include <stdio.h>

int main() {

    char *s = "Hola mundo\n"; // <---- Estoy añadiendo un cambio de línea porque sino me da TOC :D
    int len = 0;

    // print string
    for (char *x = s; *x != '\0'; x++) {
        putchar(*x);
        len++;
    }

    printf("strlen : %d caracteres\n", len); // <---- Devuelve 11 por el cambio de línea

    // Intento erróneo de modificar el string:
    // s[0] = 'h';

    // print string
    for (char *x = s; *x != '\0'; x++) {
        putchar(*x);
        len++;
    }

    char s2[] = "Hola mundo\n"; // <---- modificable
    s2[0] = 'h';

    for (char *x = s2; *x != '\0'; x++) {
        putchar(*x);
        len++;
    }

    return 0;
}