#include <stdio.h>

int main() {
	int product_code, number_units, i;
	double price_unit, value_pay = 0;

	for (i = 0; i < 2; i++) {
		scanf("%d %d %lf", &product_code, &number_units, &price_unit);
		value_pay += number_units * price_unit;
	}

	printf("VALOR A PAGAR: R$ %.2lf\n", value_pay);
	return 0;
}
