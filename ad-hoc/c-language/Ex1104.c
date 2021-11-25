#include <string.h>
#include <stdio.h>

#define MAX_CARD_VALUE 10000

int main() {
    _Bool alice_cards[MAX_CARD_VALUE], beatriz_cards[MAX_CARD_VALUE];
    int i, alice_num_cards, beatriz_num_cards, alice_can_trade, beatriz_can_trade, tmp;

    while (1) {
        scanf("%d %d", &alice_num_cards, &beatriz_num_cards);
        if (alice_num_cards == 0 || beatriz_num_cards == 0) break;

        memset(alice_cards, 0, sizeof(alice_cards));
        memset(beatriz_cards, 0, sizeof(beatriz_cards));

        for (i = 0; i < alice_num_cards; i++) {
            scanf("%d\n", &tmp);
            alice_cards[tmp] = 1;
        }

        for (i = 0; i < beatriz_num_cards; i++) {
            scanf("%d", &tmp);
            beatriz_cards[tmp] = 1;
        }

        alice_can_trade = 0, beatriz_can_trade = 0;
        for (i = 0; i < MAX_CARD_VALUE; i++) {
            if (alice_cards[i] && ! beatriz_cards[i]) alice_can_trade++;
            if (beatriz_cards[i] && ! alice_cards[i]) beatriz_can_trade++;
        }

        printf("%d\n", beatriz_can_trade > alice_can_trade ? alice_can_trade : beatriz_can_trade);
    }

    return 0;
}
