#include <stdio.h>

#define MAX_STRING_LEN 100

int main() {
    int cases, i, j;
    double difficulty, grade, max_grade, min_grade, sum;
    char name[MAX_STRING_LEN];

    scanf("%d", &cases);

    for (i = 0; i < cases; i++) {
        scanf("%s", name);
        scanf("%lf", &difficulty);

        sum = 0;
        max_grade = 0.0;
        min_grade = 10.0;

        for (j = 0; j < 7; j++) {
            scanf("%lf", &grade);

            if (grade > max_grade) max_grade = grade;
            if (grade < min_grade) min_grade = grade;

            sum += grade;
        }

        sum -= (max_grade + min_grade);
        printf("%s %.2lf\n", name, sum * difficulty);
    }

    return 0;
}
