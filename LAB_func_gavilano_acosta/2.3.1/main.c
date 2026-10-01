#include <stdio.h>
#include "raiz_digital.h"

int main() {

    int n;
    scanf("%d", &n);

    int root = digital_root(n);

    printf("\nraiz digital: %d\n", root);

    return 0;
}