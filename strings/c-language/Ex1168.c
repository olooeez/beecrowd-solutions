#include <stdio.h>

int main() {
    int i, cases, j, sum;
    char number[102];
    
    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%s", number);

        sum = 0;
        for (j = 0; number[j] != '\0'; j++) {
            switch (number[j]) {
            case '0':
                sum += 6;
                break;
            case '1':
                sum += 2;
                break;
            case '2':
                sum += 5;
                break;
            case '3':
                sum += 5;
                break;
            case '4':               
                sum += 4;
                break;
            case '5':               
                sum += 5;
                break;
            case '6':               
                sum += 6;
                break;
            case '7':               
                sum += 3;
                break;
            case '8':
                sum += 7;
                break;
            case '9':
                sum += 6;
                break;
            }
        }

        printf("%d leds\n", sum);
    }

    return 0;
}
