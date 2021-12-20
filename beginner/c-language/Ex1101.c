#include <stdio.h>

void set_max_min(int m, int n, int *max, int *min);

int main() {
	int m, n, max, min, i, sum = 0;

	while (1) {
		scanf("%d %d", &m, &n);

		if (m <= 0 || n <= 0) break;

		set_max_min(m, n, &max, &min);

		for (i = min; i <= max; i++) {
			sum += i;
			printf("%d ", i);
		}

		printf("Sum=%d\n", sum);
		sum = 0;
	}

	return 0;
}

void set_max_min(int m, int n, int *max, int *min) {
	if (m >= n) {
		*max = m;
		*min = n;
	} else {
		*max = n;
		*min = m;
	}
}
