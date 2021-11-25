#include <stdio.h>

int main() {
    int num_per_line, total_nums, i, j = 1;

    scanf("%d %d", &num_per_line, &total_nums);

    for (i = 1; i <= total_nums; i++) {
        if (j != num_per_line) {
            printf("%d ", i);
            j++;
        } else {
            printf("%d\n", i);
            j = 1;
        }
    }

    return 0;
}
