#include <stdio.h>

int main() {
	int total_distance;
	double total_fuel, consumption;

	scanf("%d", &total_distance);
	scanf("%lf", &total_fuel);

	consumption = total_distance / total_fuel;

	printf("%.3lf km/l\n", consumption);
	return 0;
}
