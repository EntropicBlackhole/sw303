#include <stdio.h>


int getCollatzStep(int x) {

    if (x % 2 == 0) {
        return x / 2;
    }
    else {
        return (3*x + 1);
    }
}

int getSeed(int n) {
    int steps = 0;

    while (n != 1) {
        n = getCollatzStep(n);
        steps++;
    }

    return steps;
}

int main() {

    int maxSeed = 0, maxSeeder = 1;
    for (int i = 1; i <= 10000; i++) {
        
        int seed = getSeed(i);
        
        if (seed > maxSeed) {
            maxSeed = seed;
            maxSeeder = i; 
        }
    }

    printf("Mayor semilla en [1, 10000]: n = %d, seed = %d", maxSeeder, maxSeed);

    return 0;
}