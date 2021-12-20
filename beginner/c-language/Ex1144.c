#include <stdio.h>
#include <math.h>

int main() {
	int cases, square, cube, i;

	scanf("%d", &cases);

	for (i = 1; i <= cases; i++) {
		square = pow(i, 2);
		cube = pow(i, 3);

		printf("%d %d %d\n", i, square, cube);
		printf("%d %d %d\n", i, square + 1, cube + 1);
	}

	return 0;
}
