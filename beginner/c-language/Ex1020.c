#include <stdio.h>

int main() {
	int days, years, months;

	scanf("%d", &days);

	years = days / 365;
	days %= 365;

	months = days / 30;
	days %= 30;

	printf("%d ano(s)\n", years);
	printf("%d mes(es)\n", months);
	printf("%d dia(s)\n", days);
	return 0;
}
