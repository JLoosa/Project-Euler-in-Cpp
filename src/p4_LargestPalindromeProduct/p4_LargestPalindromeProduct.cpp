#include <stdio.h>
#include <stdlib.h>

unsigned int reverse(const unsigned int number) {
    unsigned int original = number;
    unsigned int remainder;
    unsigned int reversed = 0;

    while (original != 0) {
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original /= 10;
    }

    return reversed;
}

int peProblem4() {

    unsigned int product;

    for (unsigned  int factorA = 99; factorA >= 10; factorA --) {
        for (unsigned  int factorB = factorA; factorB >= 10; factorB --) {
            for (unsigned  int factorC = factorB; factorC >= 10; factorC --) {
                product = factorA * factorB * factorC;
                unsigned int rev = reverse(product);
                if (rev == product) {
                    printf("%d * %d * %d = %u", factorA, factorB, factorC, product);
                    return product;
                }
            }
        }
    }

    return 0;
}


int p4main()
{
    peProblem4();
    return 0;
}
