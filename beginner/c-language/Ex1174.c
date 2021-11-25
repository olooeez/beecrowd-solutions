#include <stdio.h>

#define ARRAY_SIZE 100

int main() {
    double array[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%lf", &array[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (array[i]  <= 10.0) printf("A[%d] = %.1lf\n", i, array[i]);
    }

    return 0;
}
