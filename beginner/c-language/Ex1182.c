#include <stdio.h>

int main() {
	double M[12][12], sum = 0.0;
	char operation[2];
	int i, j, column;

	scanf("%d", &column);
	scanf("%s", operation);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &M[i][j]);

			if (column == j) sum += M[i][j];
		}
	}

	if (operation[0] == 'S') printf("%.1lf\n", sum);
	else if (operation[0] == 'M') printf("%.1lf\n", sum / 12.0);
	return 0;
}
