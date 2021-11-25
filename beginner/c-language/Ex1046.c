#include <stdio.h>

int main() {
    int time_start, time_end, duration;

    scanf("%d %d", &time_start, &time_end);

    if (time_start > time_end) {
        duration = 24 - time_start + time_end;
    } else if (time_start < time_end) {
        duration = time_end - time_start;
    } else {
        duration = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}
