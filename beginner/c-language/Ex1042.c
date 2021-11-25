#include <stdio.h>

void growing(int a, int b, int c);
void show_all(int a, int b, int c);

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    growing(a, b, c);
    printf("\n");

    show_all(a, b, c);
    return 0;
}

void growing(int a, int b, int c) {
    int temp;
    if (b < a) {
        temp = b;
        b = a;
        a = temp;
    } if (b > c) {
        temp = c;
        c = b;
        b = temp;
    } if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }

    show_all(a, b, c);
}

void show_all(int a, int b, int c) {
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
