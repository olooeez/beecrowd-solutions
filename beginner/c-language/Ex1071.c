#include <stdio.h>

void set_max_min(int x, int y, int *max, int *min);

int main() {
    int x, y, max, min, sum_odd = 0, i;

    scanf("%d", &x);
    scanf("%d", &y);

    set_max_min(x, y, &max, &min);

    for (i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            sum_odd += i;
        }
    }

    printf("%d\n", sum_odd);
    return 0;
}

void set_max_min(int x, int y, int *max, int *min) {
    *max = (x > y) ? x : y;
    *min = (x < y) ? x : y;
}
