#include <stdio.h>

int main() {
    double a, b, c, a_weight = 2, b_weight = 3, c_weight = 5, avarege;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    avarege = (a * a_weight + b * b_weight + c * c_weight) / (a_weight + b_weight + c_weight);

    printf("MEDIA = %.1lf\n", avarege);
    return 0;
}
