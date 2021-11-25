#include <stdio.h>

int main() {
    int first_num, last_num, sum = 0, i;

    scanf("%d %d", &first_num, &last_num);

    while (last_num <= 0) {
        scanf("%d", &last_num);
    }

    for (i = 1; i <= last_num; i++) {
        sum += first_num++;
    }

    printf("%d\n", sum);
    return 0;
}
