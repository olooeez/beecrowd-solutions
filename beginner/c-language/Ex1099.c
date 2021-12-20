#include <stdio.h>

void set_max_min(int x, int y, int *max, int *min);

int main() {
	int cases, i, j, x, y, sum = 0, max, min;

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		scanf("%d %d", &x, &y);
		set_max_min(x, y, &max, &min);

		for (j = min + 1; j < max; j++) {
			if (j % 2 != 0) sum += j;
		}

		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}

void set_max_min(int x, int y, int *max, int *min) {
	if (x >= y) {
		*max = x;
		*min = y;
	} else {
		*max = y;
		*min = x;
	}
}
