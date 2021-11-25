#include <stdio.h>

#define northeaster "NE"
#define northwester "NO"
#define southwester "SO"
#define southeaster "SE"

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
                printf("%s\n", northeaster);
            } else if (x < n && y > m) {
                printf("%s\n", northwester);
            } else if (x > n && y < m) {
                printf("%s\n", southeaster);
            } else if (x < n && y < m) {
                printf("%s\n", southwester);
            }
        }

    }

    return 0;
}
