#include <stdio.h>

int main() {
    int cases, i, number;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%d", &number);

        if (number == 0) {
            printf("NULL\n");
            continue;
        }

        if (number % 2 == 0) {
            printf("EVEN");
        } else {
            printf("ODD");
        }

        if (number > 0) {
            printf(" POSITIVE\n");
        } else {
            printf(" NEGATIVE\n");
        }
    }

    return 0;
}
