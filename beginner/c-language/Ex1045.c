#include <stdio.h>
#include <math.h>

void swap(double *a, double *b, double *c);

int main() {
	double a, b, c, temp;

	scanf("%lf %lf %lf", &a, &b, &c);
	swap(&a, &b, &c);

	if (a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
		printf("TRIANGULO RETANGULO\n");
	} else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
		printf("TRIANGULO OBTUSANGULO\n");
	} else if (pow(a, 2) < pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO ACUTANGULO\n");
	}

	if (a == b && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	} else if (a == b || b == c) {
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}

void swap(double *a, double *b, double *c) {
	double temp;
	if (*b > *a) {
		temp = *a;
		*a = *b;
		*b = temp;
	} if (*b < *c) {
		temp = *b;
		*b = *c;
		*c = temp;
	} if (*a < *b) {
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
