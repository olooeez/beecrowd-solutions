#include <stdio.h>

int main() {
	int protests;

	while (scanf("%d", &protests) != EOF) {
		if (protests == 0) printf("vai ter copa!\n");
		else printf("vai ter duas!\n");
	}

	return 0;
}
