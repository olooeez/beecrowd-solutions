#include <stdio.h>

int main() {
	int cases, num, i, j;
	_Bool is_prime;

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		is_prime = 1;

		scanf("%d", &num);

		for (j = 2; j < num; j++) {
			if (num % j == 0) {
				is_prime = 0;
				break;
			}
		}

		if (is_prime) printf("%d eh primo\n", num);
		else printf("%d nao eh primo\n", num);
	}

	return 0;
}
