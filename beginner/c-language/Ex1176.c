#include <stdio.h>

int main() {
	int number, i, index;
	unsigned long long int fibonacci[61];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (i = 2; i <= 60; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	scanf("%d", &number);

	for (i = 0; i < number; i++) {
		scanf("%d", &index);
		printf("Fib(%d) = %llu\n", index, fibonacci[index]);
	}

	return 0;
}
