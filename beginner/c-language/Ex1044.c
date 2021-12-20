#include <stdio.h>

void get_max_min(int *max, int *min, int a, int b);

int main() {
	int a, b, max, min;

	scanf("%d %d", &a, &b);

	get_max_min(&max, &min, a, b);

	if (max % min == 0) {
		printf("Sao Multiplos\n");
	} else printf("Nao sao Multiplos\n");

	return 0;
}

void get_max_min(int *max, int *min, int a, int b) {
	if (a > b) {
		*max = a;
		*min = b;
	} else {
		*max = b;
		*min = a;
	}
}
