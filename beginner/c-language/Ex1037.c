#include <stdio.h>

int main() {
	double number;

	scanf("%lf", &number);

	if (number < 0 || number > 100.0) {
		printf("Fora de intervalo\n");
	} else if (number <= 25.0) {
		printf("Intervalo [0,25]\n");
	} else if (number <= 50.0) {
		printf("Intervalo (25,50]\n");
	} else if (number <= 75.0) {
		printf("Intervalo (50,75]\n");
	} else if (number <= 100.0) {
		printf("Intervalo (75,100]\n");
	}

	return 0;
}
