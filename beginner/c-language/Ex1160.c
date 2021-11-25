#include <stdio.h>

int main() {
    int population_a, population_b, cases, i, years;
    double growth_a, growth_b;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        years = 0;

        scanf("%d %d %lf %lf", &population_a, &population_b, &growth_a, &growth_b);
        
        while (population_a <= population_b) {
            population_a *= 1.0 + (growth_a / 100);
            population_b *= 1.0 + (growth_b / 100);
            years++;

            if (years > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        };

        if (years <= 100) printf("%d anos.\n", years);
    }

    return 0;
}
