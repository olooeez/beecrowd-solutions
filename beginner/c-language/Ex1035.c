#include <stdio.h>

int main() {
	int values[4], i;

	for (i = 0; i < 4; i++) {
		scanf("%d",&values[i]);
	}

	if (values[1] > values[2] && values[3] > values[0] && values[2] + values[3] > values[0] + values[1] && values[2] >= 0 && values[3] >= 0 && values[0] % 2 == 0) {
		printf("Valores aceitos\n");
	} else printf("Valores nao aceitos\n");

	return 0;
}
