#include <stdio.h>

int main() {
	double numbers[6], sum_positive_values = 0.0;
	int i, count_positives = 0;

	for (i = 0; i < 6; i++) {
		scanf("%lf", &numbers[i]);
	}

	for (i = 0; i < 6; i++) {
		if (numbers[i] > 0) {
			count_positives++;
			sum_positive_values += numbers[i];
		}
	}

	printf("%d valores positivos\n", count_positives);
	printf("%.1lf\n", (double) sum_positive_values / count_positives);
	return 0;
}
