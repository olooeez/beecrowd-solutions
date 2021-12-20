#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
	int array[ARRAY_SIZE], i;

	for (i = 0; i < ARRAY_SIZE; i++) {
		scanf("%d", &array[i]);

		if (array[i] <= 0) array[i] = 1;
	}

	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("X[%d] = %d\n", i, array[i]);
	}

	return 0;
}
