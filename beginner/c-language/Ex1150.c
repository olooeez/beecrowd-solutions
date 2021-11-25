#include <stdio.h>

int main() {
    int x, z, sum_count = 0, sum, i;

    scanf("%d %d", &x, &z);

    while (z <= x) {
        scanf("%d", &z);
    }

    for (i = x, sum = 0; sum < z; i++) {
        sum += i;
        sum_count++;
    }

    printf("%d\n", sum_count);
    return 0;
}
