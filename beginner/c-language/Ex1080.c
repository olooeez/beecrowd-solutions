#include <stdio.h>

int main() {
	int number, max = 0, position, i;

	for (i = 1; i <= 100; i++) {
		scanf("%d", &number);

		if (number > max) {
			max = number;
			position = i;
		}
	}

	printf("%d\n%d\n", max, position);
	return 0;
}
