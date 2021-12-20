#include <stdio.h>

#define CORRECT_PASSWORD 2002

int main() {
	int password;

	do {
		scanf("%d", &password);

		if (password != CORRECT_PASSWORD) {
			printf("Senha Invalida\n");
		}

	} while (password != CORRECT_PASSWORD);

	printf("Acesso Permitido\n");
	return 0;
}
