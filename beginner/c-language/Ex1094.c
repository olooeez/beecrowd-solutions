#include <stdio.h>

int main() {
	int cases, i, rabbits_total = 0, rats_total = 0, frogs_total = 0, total, amount;
	char animal_character;

	scanf("%d", &cases);

	for (i = 0; i < cases; i++) {
		scanf("%d %c", &amount, &animal_character);

		if (animal_character == 'C') rabbits_total += amount;
		else if (animal_character == 'R') rats_total += amount;
		else if (animal_character == 'S') frogs_total += amount;
	}

	total = rabbits_total + rats_total + frogs_total;

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", rabbits_total);
	printf("Total de ratos: %d\n", rats_total);
	printf("Total de sapos: %d\n", frogs_total);
	printf("Percentual de coelhos: %.2lf %%\n", (double) (rabbits_total * 100) / total);
	printf("Percentual de ratos: %.2lf %%\n", (double) (rats_total * 100) / total);
	printf("Percentual de sapos: %.2lf %%\n", (double) (frogs_total * 100) / total);
	return 0;
}
