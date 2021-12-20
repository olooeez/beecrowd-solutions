#include <stdio.h>

#define NORTHEASTER "NE"
#define NORTHWESTER "NO"
#define SOUTHWESTER "SO"
#define SOUTHEASTER "SE"

int main() {
	int cases, i;

	while (1) {
		int x, y, n, m;

		scanf("%hu", &cases);
		if (cases == 0) break;

		scanf("%d %d", &n, &m);

		for (i = 0; i < cases; i++) {
			scanf("%d %d", &x, &y);

			if (x == n || y == m) {
				printf("divisa\n");
			} else if (x > n && y > m) {
				printf("%s\n", NORTHEASTER);
			} else if (x < n && y > m) {
				printf("%s\n", NORTHWESTER);
			} else if (x > n && y < m) {
				printf("%s\n", SOUTHEASTER);
			} else if (x < n && y < m) {
				printf("%s\n", SOUTHWESTER);
			}
		}

	}

	return 0;
}
