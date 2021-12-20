#include <stdio.h>

int main() {
	int number_cases, numbers, sum_in = 0, sum_out = 0, i;

	scanf("%d", &number_cases);

	for (i = 0; i < number_cases; i++) {
		scanf("%d", &numbers);
		if (numbers >= 10 && numbers <= 20) {
			sum_in++;
		} else sum_out++;
	}

	printf("%d in\n", sum_in);
	printf("%d out\n", sum_out);
	return 0;
}
