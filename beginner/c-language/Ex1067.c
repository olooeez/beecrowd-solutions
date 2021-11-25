#include <stdio.h>

int main() {
    int max_num, i;
    
    scanf("%d", &max_num);

    for (i = 0; i <= max_num; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
