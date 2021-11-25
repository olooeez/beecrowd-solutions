#include <stdio.h>

void show_sum_grades(void);

int main() {
    show_sum_grades();
    
    int new_calculus;

    while (1) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &new_calculus);

        if (new_calculus == 2) break;
        else if (new_calculus == 1) show_sum_grades();
    }
    
    return 0;
}

void show_sum_grades(void) {
    int i;
    float sum = 0.0, tmp;

    for (i = 0; i < 2; i++) {
        scanf("%f", &tmp);

        if (tmp > 10 || tmp < 0) {
            printf("nota invalida\n");
            i--;
        } else sum += tmp;
    }
        
    printf("media = %.2f\n", sum / 2.0);
}
