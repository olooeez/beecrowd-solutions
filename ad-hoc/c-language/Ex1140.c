#include <stdio.h>
#include <ctype.h>

#define MAX_LEN_PHRASE 1001

int main() {
	int i;
	_Bool is_tatutogram;
	char phrase[MAX_LEN_PHRASE], first_letter_word[2];

	while (1) {
		fgets(phrase, MAX_LEN_PHRASE, stdin);
		if (phrase[0] == '*') break;

		first_letter_word[0] = tolower(phrase[0]);
		is_tatutogram = 1;

		for (i = 0; phrase[i] != '\0'; i++) {
			if (phrase[i] == ' ') {
				i++;
				phrase[i] = tolower(phrase[i]);

				if (phrase[i] != first_letter_word[0]) {
					is_tatutogram = 0;
					break;
				}
			}
		}

		printf("%c\n", (is_tatutogram) ? 'Y' : 'N');
	}

	return 0;
}
