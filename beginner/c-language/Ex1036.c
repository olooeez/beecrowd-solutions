#include <stdio.h>
#include <math.h>

double delta(double a, double  b, double c);
void bhaskara(double a, double b, double delta, double *r1, double *r2);

int main() {
    double a, b, c, r1, r2, delta_value;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta_value = delta(a, b, c);

    if (a == 0 || delta_value < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    bhaskara(a, b, delta_value, &r1, &r2);

    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    return 0;
}

double delta(double a, double b, double c) {
    return pow(b, 2) - 4 * a * c;
}

void bhaskara(double a, double b, double delta, double *r1, double *r2) {
    *r1 = (-b + sqrt(delta)) / (2 * a);
    *r2 = (-b - sqrt(delta)) / (2 * a);
}
