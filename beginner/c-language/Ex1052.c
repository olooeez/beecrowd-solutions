#include <stdio.h>

int main() {
	int month_number;

	char *months[] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	scanf("%d", &month_number);

	printf("%s\n", months[month_number - 1]);
	return 0;
}
