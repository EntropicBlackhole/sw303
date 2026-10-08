#include <stdio.h>

int main() {

    int v[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = v;

    printf("*p     : %d\n", *p);
    printf("*(p+1) : %d\n", *(p+1));
    printf("*(p+7) : %d\n\n", *(p+7));

    printf("p[3]   : %d\n", p[3]);
    printf("3[p]   : %d\n\n", 3[p]);

    printf("(p + 5) - p : %ld\n", ((p + 5) - p));
    printf("sizeof(int) : %zu\n\n", sizeof(int));

    // sum of all
    int sum = 0;

    printf("v = [ ");
    for (int i = 0; i < 8; i++) {
        
        printf("%d", *(v + i));
        printf(i == 7 ? " ]\n" : ", ");
        
        sum += *(v + i);
    }
    
    printf("S(v) = %d\n\n", sum);
    
    int *q = &v[7];
    printf("rev(v) = [ ");
    do {
        printf("%d", *q);
        printf(q == v ? " ]\n\n" : ", ");

        q--;
    } while (q != v - 1);

    return 0;
}