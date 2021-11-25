#include <stdio.h>

int main() {
    int employee_number, worked_hours;
    double recive_per_hour, salary;

    scanf("%d", &employee_number);
    scanf("%d", &worked_hours);
    scanf("%lf", &recive_per_hour);

    salary = worked_hours * recive_per_hour;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}
