#include <stdio.h>

#define WEIGHT_1 2
#define WEIGHT_2 3
#define WEIGHT_3 4
#define WEIGHT_4 1

int main() {
	double n1, n2, n3, n4, average;

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

	average = (n1 * WEIGHT_1 + n2 * WEIGHT_2 + n3 * WEIGHT_3 + n4 * WEIGHT_4) / (WEIGHT_1 + WEIGHT_2 + WEIGHT_3 + WEIGHT_4);

	printf("Media: %.1lf\n", average);

	if (average >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if (average < 5.0) {
		printf("Aluno reprovado.\n");
	} else {
		double exam_score;

		printf("Aluno em exame.\n");

		scanf("%lf", &exam_score);

		printf("Nota do exame: %.1lf\n", exam_score);

		average = (average + exam_score) / 2;

		if (average >= 5.0) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}

		printf("Media final: %.1lf\n", average);
	}

	return 0;
}
