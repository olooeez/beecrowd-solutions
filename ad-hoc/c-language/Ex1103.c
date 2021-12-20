#include <stdio.h>

int main() {
	int h1, m1, h2, m2, start, finish;

	while (1) {
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if (h1 == 0 && m2 == 0 && h2 == 0 && m2 == 0) break;

		if (h1 == 0) start = 24 * 60 + m1;
		else start = h1 * 60 + m1;

		if (h2 == 0) finish = 24 * 60 + m2;
		else finish = h2 * 60 + m2;

		if (finish > start) printf("%d\n", finish - start);
		else printf("%d\n", 24 * 60 - (start - finish));
	}

	return 0;
}
