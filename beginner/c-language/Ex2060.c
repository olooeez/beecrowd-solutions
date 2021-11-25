#include <stdio.h>

int main() {
	int cases, i, mult_2 = 0, mult_3 = 0, mult_4 = 0, mult_5 = 0;

	scanf("%d", &cases);

	int values[cases];

	for (i = 0; i < cases; i++) {
		scanf("%d", &values[i]);
	}

	for (i = 0; i < cases; i++) {
		if (values[i] % 2 == 0) mult_2++;
		if (values[i] % 3 == 0) mult_3++;
		if (values[i] % 4 == 0) mult_4++;
		if (values[i] % 5 == 0) mult_5++;
	}

	printf("%d Multiplo(s) de 2\n", mult_2);
	printf("%d Multiplo(s) de 3\n", mult_3);
	printf("%d Multiplo(s) de 4\n", mult_4);
	printf("%d Multiplo(s) de 5\n", mult_5);
	return 0;
}
