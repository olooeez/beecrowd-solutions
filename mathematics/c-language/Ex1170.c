#include <stdio.h>

int main() {
    int cases, i, days;
    float food;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%f", &food);

        days = 0;
        while (food > 1) {
            food /= 2;
            days++;
        }

        printf("%d dias\n", days);
    }

    return 0;
}
