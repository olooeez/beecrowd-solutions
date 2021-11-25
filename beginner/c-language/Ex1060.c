#include <stdio.h>

int main() {
    double numbers[6];
    int i, count_positives = 0;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &numbers[i]);
    }

    for (i = 0; i < 6; i++) {
        if (numbers[i] >= 0.0) {
            count_positives++;
        }
    }

    printf("%d valores positivos\n", count_positives);
    return 0;
}
