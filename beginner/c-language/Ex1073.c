#include <stdio.h>

int main() {
	int max_number, i;

	scanf("%d", &max_number);

	for (i = 2; i <= max_number; i += 2) {
		printf("%d^2 = %d\n", i, i * i);
	}
	return 0;
}
