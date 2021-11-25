#include <stdio.h>

#define SIZE_ARRAY 1000

int main() {
	int repetition, i, j, array[SIZE_ARRAY];

	scanf("%d", &repetition);

	for (i = 0, j = 0; i < SIZE_ARRAY; i++, j++) {
		if (j == repetition) j = 0;

		array[i] = j;
	}

	for (i = 0; i < SIZE_ARRAY; i++) {
		printf("N[%d] = %d\n", i, array[i]);
	}

	return 0;
}
