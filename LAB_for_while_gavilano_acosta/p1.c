#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n > 9) {

        printf("-> %d ", n);

        int root = 0;
        int num = n;

        while (num != 0) {

            root += num % 10;
            num /= 10;
        }

        n = root;
    }

    printf("-> %d \n", n);
    printf("raiz digital: %d\n", n);

    return 0;
}