#include <stdio.h>

int main() {
    int age, sum_age = 0, count_ages = 0;

    while (1) {
        scanf("%d", &age);
        if (age <= 0) break;

        sum_age += age;
        count_ages++;
    }

    printf("%.2lf\n", (double) sum_age / count_ages);
    return 0;
}
