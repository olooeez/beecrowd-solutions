#include <stdio.h>

#define CACHORRO_QUENTE 4.00
#define X_SALADA 4.50
#define X_BACON 5.00
#define TORRADA_SIMPLES 2.00
#define REFRIGERANTE 1.50

int main() {
    int x, y;
    double total;

    scanf("%d %d", &x, &y);

    switch (x) {
        case 1:
            total = y * CACHORRO_QUENTE;
            break;
        case 2:
            total = y * X_SALADA;
            break;
        case 3:
            total = y * X_BACON;
            break;
        case 4:
            total = y * TORRADA_SIMPLES;
            break;
        case 5:
            total = y * REFRIGERANTE;
    }

    printf("Total: R$ %.2lf\n", total);
    return 0;
}
