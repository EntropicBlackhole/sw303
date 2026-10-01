#include <stdio.h>


int sum_digits(int n) {

    int sum = 0;

    while (n != 0) {

        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void print_progress(int n) {
    printf("-> %d ", n);
}

int digital_root(int n) {

    while (n > 9) {
        print_progress(n);
        n = sum_digits(n);
    }

    print_progress(n);

    return n;
}

int main() {

    int n;
    scanf("%d", &n);

    int root = digital_root(n);

    printf("\nraiz digital: %d\n", root);

    return 0;
}