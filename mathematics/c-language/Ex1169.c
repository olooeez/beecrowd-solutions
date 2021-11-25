#include <stdio.h>
#include <math.h>

int main() {
    int cases, i, squares;

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%d", &squares);

        printf("%lld kg\n", (long long int) (pow(2, squares) / 12000));
    }
    
    return 0;
}
