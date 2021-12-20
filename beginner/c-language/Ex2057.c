#include <stdio.h>

int main() {
	int exit_time, trevel_time, arrival_time, destination_time;

	scanf("%d %d %d", &exit_time, &trevel_time, &arrival_time);

	destination_time = exit_time + trevel_time + arrival_time;

	if (destination_time > 24) {
		destination_time -= 24;
	} else if (destination_time < 0) {
		destination_time += 24;
	}

	printf("%d\n", destination_time);
	return 0;
}
