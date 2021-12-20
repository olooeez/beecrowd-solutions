#include <stdio.h>

int main() {
	int odd[5], even[5], tmp, i;
	int odd_inter = 0, even_inter = 0, odd_count = 0, even_count = 0;

	for (i = 0; i < 15; i++) {
		scanf("%d", &tmp);

		if (tmp % 2 == 0) {
			odd[odd_count] = tmp;
			odd_count++;
		} else {
			even[even_count] = tmp;
			even_count++;
		}

		if (odd_count == 5) {
			odd_count = 0;

			for (odd_inter = 0; odd_inter < 5; odd_inter++) {
				printf("par[%d] = %d\n", odd_inter, odd[odd_inter]);
			}
		}else if (even_count == 5) {
			even_count = 0;

			for (even_inter = 0; even_inter < 5; even_inter++) {
				printf("impar[%d] = %d\n", even_inter, even[even_inter]);
			}
		}
	}

	for (i = 0; i < even_count; i++) {
		printf("impar[%d] = %d\n", i, even[i]);
	}

	for (i = 0; i < odd_count; i++) {
		printf("par[%d] = %d\n", i, odd[i]);
	}

	return 0;
}
