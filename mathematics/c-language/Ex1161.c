#include <stdio.h>

long long int factorial(int x);

int main() {
	int m, n;

	while (scanf("%d %d", &m, &n) != EOF) {
		printf("%lld\n", factorial(m) + factorial(n));
	}

	return 0;
}

long long int factorial(int x) {
	int i;
	long long int factorial = 1;

	for (i = x; i > 1; i--) {
		factorial *= i;
	}

	return factorial;
}
