#include <stdio.h>

#define WEIGHT_1 2
#define WEIGHT_2 3
#define WEIGHT_3 5

int main() {
    int cases, i, j;
    double numbers[3], weighted;

    scanf("%d", &cases);

    for (j = 0; j < cases; j++) {
        for (i = 0; i < 3; i++) {
            scanf("%lf", &numbers[i]);
            weighted = (numbers[0] * WEIGHT_1 + numbers[1] * WEIGHT_2 + WEIGHT_3 * numbers[2]);
            weighted /= WEIGHT_1 + WEIGHT_2 + WEIGHT_3;
        }

        printf("%.1lf\n", weighted);
    }
    return 0;
}
