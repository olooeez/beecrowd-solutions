#include <stdio.h>
#include <math.h>

int main() {
	int lines, i, square, cube;

	scanf("%d", &lines);

	for (i = 1; i <= lines; i++) {
		square = pow(i, 2);
		cube = pow(i, 3);

		printf("%d %d %d\n", i, square, cube);
	}

	return 0;
}
