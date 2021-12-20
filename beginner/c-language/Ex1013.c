#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, bigger;

	scanf("%d %d %d", &a, &b, &c);

	bigger = (a + b + abs(a - b)) / 2;

	if (bigger < c) bigger = c;

	printf("%d eh o maior\n", bigger);
	return 0;
}
