#include <stdio.h>

int main() {
    double salaray;
    float tax = 0;

    scanf("%lf", &salaray);

    if (salaray >= 2000.01 && salaray <= 3000.00) {
        tax = 0.08;
        tax = (salaray - 2000.0) * tax; 
    } else if (salaray >= 3000.01 && salaray <= 4500.00) {
        tax = 0.18;
        tax = 1000.0 * 0.08 + (salaray - 3000.0) * tax;
    } else if (salaray > 4500.00) {
        tax = 0.28;
        tax = 1000.0 * 0.08 + 1500.0 * 0.18 + (salaray - 4500.0) * tax;
    }

    if (tax != 0) {
        printf("R$ %.2lf\n", tax);
    } else {
        printf("Isento\n");
    }

    return 0;
}
