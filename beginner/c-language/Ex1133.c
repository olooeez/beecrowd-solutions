#include <stdio.h>

void set_min_max(int x, int y, int *max, int *min);

int main() {
	int x, y, min, max, i;

	scanf("%d %d", &x, &y);
	set_min_max(x, y, &max, &min);

	for (i = min + 1; i < max; i++) {
		if (i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
	}

	return 0;
}

void set_min_max(int x, int y, int *max, int *min) {
	if (x > y) {
		*max = x;
		*min = y;
	} else {
		*max = y;
		*min = x;
	}
}
