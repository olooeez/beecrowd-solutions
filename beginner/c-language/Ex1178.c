#include <stdio.h>

#define SIZE_ARRAY 100

int main() {
	int i;
	double num, tmp, array[SIZE_ARRAY];

	scanf("%lf", &num);

	tmp = num;

	for (i = 0; i < SIZE_ARRAY; i++) {
		array[i] = tmp;
		tmp /= 2;
	}

	for (i = 0; i < SIZE_ARRAY; i++) {
		printf("N[%d] = %.4lf\n", i, array[i]);
	}

	return 0;
}
