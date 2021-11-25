#include <stdio.h>

#define FUEL_LITERS 12.0

int main() {
    int trip_hours, trip_average_speed;
    double trip_liters;

    scanf("%d", &trip_hours);
    scanf("%d", &trip_average_speed);

    trip_liters = (trip_average_speed * trip_hours) / FUEL_LITERS;

    printf("%.3lf\n", trip_liters);
    return 0;
}
