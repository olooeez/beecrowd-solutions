#include <stdio.h>
#include <string.h>

int main() {
	char line[500];

	fgets(line, 500, stdin);

	if (strlen(line) <= 81) printf("YES\n");
	else printf("NO\n");
	return 0;
}
