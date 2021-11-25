#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
    int num, i, array[ARRAY_SIZE];

    scanf("%d", &num);

    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = num;
        num *= 2;
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("N[%d] = %d\n", i, array[i]);
    }

    return 0;
}
