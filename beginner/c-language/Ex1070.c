#include <stdio.h>

int main() {
	int start_value, i, odd_count = 0;

	scanf("%d", &start_value);

	while (odd_count != 6) {
		if (start_value % 2 != 0) {
			printf("%d\n", start_value);
			odd_count++;
		}
		start_value++;
	}
	return 0;
}
