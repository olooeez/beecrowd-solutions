#include <stdio.h>

int fibonacci(int num);

int main() {
    int max_fib, i;

    scanf("%d", &max_fib);

    for (i = 0; i < max_fib - 1; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("%d\n", fibonacci(i));
    
    return 0;
}

int fibonacci(int num) {
    if (num == 0 || num == 1) {
        return num;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}
