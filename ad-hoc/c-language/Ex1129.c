#include <stdio.h>

int main() {
	int cases, alternatives[5], i, j, cont_possible_answer, index_possible_answer;
	char alternatives_letters[] = "ABCDE";

	do {
		scanf("%d", &cases);

		for (j = 0; j < cases; j++) {
			for (i = 0; i < 5; i++) scanf("%d", &alternatives[i]);

			index_possible_answer = cont_possible_answer = 0;
			for (i = 0; i < 5; i++) {
				if (alternatives[i] <= 127) {
					cont_possible_answer++;
					index_possible_answer = i;
				}
			}

			if (cont_possible_answer == 1) printf("%c\n", alternatives_letters[index_possible_answer]);
			else printf("*\n");
		}

	} while (cases != 0);
	return 0;
}
