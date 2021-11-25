#include <stdio.h>

int main() {
    double salary, readjustment_rate, new_salary, money_earned;

    scanf("%lf", &salary);
    
    if (salary >= 0.00 && salary <= 400.00) {
        readjustment_rate = 0.15;
    } else if (salary >= 400.01 && salary <= 800.00) {
        readjustment_rate = 0.12;
    } else if (salary >= 800.01 && salary <= 1200.00) {
        readjustment_rate = 0.10;
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        readjustment_rate = 0.07;
    } else {
        readjustment_rate = 0.04;
    }

    new_salary = salary * readjustment_rate + salary;
    money_earned = salary * readjustment_rate;

    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", money_earned);
    printf("Em percentual: %.0lf %%\n", readjustment_rate * 100);
    return 0;
}
