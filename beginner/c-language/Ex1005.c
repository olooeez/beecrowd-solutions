#include <stdio.h>

int main() {
    double a, b, a_weight = 3.5, b_weight = 7.5, avarege;

    scanf("%lf", &a);
    scanf("%lf", &b);

    avarege = (a * a_weight + b * b_weight) / (a_weight + b_weight);

    printf("MEDIA = %.5lf\n", avarege);
    return 0;
}
