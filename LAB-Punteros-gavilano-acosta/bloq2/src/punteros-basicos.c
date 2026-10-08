#include <stdio.h>

int main() {

    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n\n", **pp);

    printf("&x = %p\n", (void*)&x);
    printf("p = %p\n", (void*)p);
    printf("&p = %p\n\n", (void*)&p);

    printf("&pp = %p\n\n", (void*)&pp);

    // modify x from *p
    *p = 67;
    printf("x = %d\n", x);

    // modify x from **pp
    **pp = 6174;
    printf("x = %d\n", x);

    return 0;
}