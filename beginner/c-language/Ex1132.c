#include <stdio.h>

void set_max_min(int x, int y, int *max, int *min);

int main() {
    int x, y, i, max, min, sum = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    set_max_min(x, y, &max, &min);

    for (i = min; i <= max; i++) {
        if (i % 13 != 0) sum += i;
    }

    printf("%d\n", sum);
    return 0;
}

void set_max_min(int x, int y, int *max, int *min) {
    if (x > y) {
        *max = x;
        *min = y;
    } else {
        *max = y;
        *min = x;
    }
}
