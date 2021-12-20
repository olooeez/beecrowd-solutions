#include <stdio.h>
#include <string.h>

#define MAX_NUM_CASE 2001

int main() {
	int count[MAX_NUM_CASE], cases, i, tmp;

	memset(count, 0, sizeof(count));

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		scanf("%d", &tmp);
		count[tmp] += 1;
	}

	for (i = 0; i < MAX_NUM_CASE; i++) {
		if (count[i] != 0) printf("%d aparece %d vez(es)\n", i, count[i]);
	}

	return 0;
}
