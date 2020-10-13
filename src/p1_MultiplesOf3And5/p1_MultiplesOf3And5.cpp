#include <stdio.h>
#include <stdlib.h>

int peProblem1()
{
    int max_value;
    printf("What number should we consider factors of 5 and 3 up to? > ");
    scanf("%d", &max_value);
    int value_arr[max_value];
    unsigned long sum = 0;

    for (int i = 0; i < max_value; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            value_arr[i] = i;
            printf("%d ", i);
        }
        else {
            value_arr[i] = 0;
        }
        sum += value_arr[i];
    }
    printf("\n Sum of factors: %ld", sum);

    return sum;
}

int p1main()
{
    peProblem1();
    return 0;
}
