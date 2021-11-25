#include <stdio.h>

int main() {
    int numbers[5], even_count = 0, i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        }
    }

    printf("%d valores pares\n", even_count);
    return 0;
}
