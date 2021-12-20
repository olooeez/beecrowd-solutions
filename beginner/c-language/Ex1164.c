#include <stdio.h>

int main() {
	int cases, num, i, j, sum;

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		sum = 0;

		scanf("%d", &num);

		for (j = 1; j < num; j++) {
			if (num % j == 0) sum += j;
		}

		if (sum == num) printf("%d eh perfeito\n", num);
		else printf("%d nao eh perfeito\n", num);
	}

	return 0;
}
