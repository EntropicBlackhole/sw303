#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*)malloc(10 * sizeof(int));
    int *q = (int*)calloc(10, sizeof(int));

    // int *r = (int*)malloc(0);
    // free(r);

    // print arrays

    printf("p = [ ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d", p[i]);
        printf(i == 9 ? " ]\n" : ", ");   
    }

    printf("q = [ ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d", q[i]);
        printf(i == 9 ? " ]\n\n" : ", ");   
    }

    for (size_t i = 0; i < 10; i++) {
        p[i] = i*i;
        q[i] = i*i;
    }

    // print arrays

    printf("p = [ ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d", p[i]);
        printf(i == 9 ? " ]\n" : ", ");   
    }

    printf("q = [ ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d", q[i]);
        printf(i == 9 ? " ]\n\n" : ", ");   
    }

    free(p);
    free(q);

    return 0;
}