#include <stdio.h>
#include <stdlib.h>

#define MAX_PRIMES 50

int peProblem3() {
    printf("Please input a value: ");
    unsigned long int value;
    scanf("%lu", &value);
    printf("Input value: %lu. Finding all prime factors. \n", value);
    unsigned int factors[MAX_PRIMES];
    unsigned short prime_pointer = 0;
    unsigned int current_value = 2;

    while (value > 1 && current_value <= value && prime_pointer < MAX_PRIMES) {
        if (value % current_value != 0) {
            current_value += 1;
        }
        else {
            value = (value / current_value);
            factors[prime_pointer] = current_value;
            prime_pointer += 1;
        }
    }

    printf("Factors: ");
    for (int i = 0; i < prime_pointer; i++) {
        printf("%d ", factors[i]);
    }

    printf("\n The largest prime factor is: %u.\n", factors[prime_pointer-1]);

    return 0;
}

int p3main() {
    peProblem3();
    return 0;
}
