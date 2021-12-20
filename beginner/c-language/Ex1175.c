#include <stdio.h>

#define ARRAY_SIZE 20

int main() {
	int array[ARRAY_SIZE], i;

	for (i = ARRAY_SIZE - 1; i >= 0; i--) {
		scanf("%d", &array[i]);
	}

	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("N[%d] = %d\n", i, array[i]);
	}

	return 0;
}
