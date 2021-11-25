#include <stdio.h>

int main() {
    double M[12][12], sum = 0.0;
    char operation[2];
    int i, j, diagonal = 1;

    scanf("%s", operation);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = diagonal; j < 12; j++) {
            sum += M[i][j];
        }

        diagonal++;
    }

    if (operation[0] == 'S') printf("%.1lf\n", sum);
    else if (operation[0] == 'M') printf("%.1lf\n", sum / 66.0);
    return 0;
}
