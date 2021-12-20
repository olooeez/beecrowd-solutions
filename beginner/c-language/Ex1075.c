#include <stdio.h>

int main() {
	int number, i;

	scanf("%d", &number);

	for (i = 1; i < 10000; i++) {
		if (i % number == 2) {
			printf("%d\n", i);
		}
	}

	return 0;
}
