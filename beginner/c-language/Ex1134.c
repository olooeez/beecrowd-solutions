#include <stdio.h>

int main() {
    int code, cont_alcool = 0, cont_gas = 0, cont_diesel = 0;

    do {
        scanf("%d", &code);

        switch (code) {
        case 1:
            cont_alcool++;
            break;
        case 2:
            cont_gas++;
            break;
        case 3:
            cont_diesel++;
            break;
        }
        
    } while (code != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", cont_alcool);
    printf("Gasolina: %d\n", cont_gas);
    printf("Diesel: %d\n", cont_diesel);
    return 0;
}
