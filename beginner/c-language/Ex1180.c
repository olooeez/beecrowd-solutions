#include <stdio.h>

int main() {
	int total_num, i, index_min, value_min;

	scanf("%d", &total_num);

	int numbers[total_num];

	for (i = 0; i < total_num; i++) {
		scanf("%d", &numbers[i]);
	}

	value_min = numbers[0];
	index_min = 0;

	for (i = 1; i < total_num; i++) {
		if (value_min > numbers[i]) {
			value_min = numbers[i];
			index_min = i;
		}
	}

	printf("Menor valor: %d\n", value_min);
	printf("Posicao: %d\n", index_min);
	return 0;
}
