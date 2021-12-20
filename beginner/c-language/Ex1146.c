#include <stdio.h>

int main() {
	int num, i;

	while (1) {
		scanf("%d", &num);
		if (num == 0) break;

		for (i = 1; i < num; i++) {
			printf("%d ", i);
		}

		printf("%d\n", i++);
	}

	return 0;
}
