#include <stdio.h>

int main() {
	int cases, x, y, i;
	double division;

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		scanf("%d %d", &x, &y);

		if (y == 0) {
			printf("divisao impossivel\n");
		} else {
			division = (double) x / y;
			printf("%.1lf\n", division);
		}
	}

	return 0;
}
