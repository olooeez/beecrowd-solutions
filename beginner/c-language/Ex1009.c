#include <stdio.h>

#define SELLER_PERCENTAGE 0.15

int main() {
    char name[200];
    double fixed_salary, total_sales, total_salary;

    scanf("%200s", &name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sales);

    total_salary = (total_sales * SELLER_PERCENTAGE) + fixed_salary;

    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}
