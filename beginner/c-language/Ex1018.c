#include <stdio.h>

int main() {
    int money, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2;

    scanf("%d", &money);

    printf("%d\n", money);

    notes_100 = money / 100;
    money %= 100;

    notes_50 = money / 50;
    money %= 50;

    notes_20 = money / 20;
    money %= 20;

    notes_10 = money / 10;
    money %= 10;

    notes_5 = money / 5;
    money %= 5;

    notes_2 = money / 2;
    money %= 2;

    printf("%d nota(s) de R$ 100,00\n", notes_100);
    printf("%d nota(s) de R$ 50,00\n", notes_50);
    printf("%d nota(s) de R$ 20,00\n", notes_20);
    printf("%d nota(s) de R$ 10,00\n", notes_10);
    printf("%d nota(s) de R$ 5,00\n", notes_5);
    printf("%d nota(s) de R$ 2,00\n", notes_2);
    printf("%d nota(s) de R$ 1,00\n", money);
    return 0;
}
