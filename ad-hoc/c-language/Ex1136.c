#include <string.h>
#include <math.h>
#include <stdio.h>

int main() {
	int num_balls, num_balls_globe, i, j, diference_abs;

	while (1) {
		scanf("%d %d", &num_balls, &num_balls_globe);
		if (num_balls == 0 && num_balls_globe == 0) break;

		int balls[num_balls_globe], count_lasting = num_balls + 1;
		_Bool diferent_balls[num_balls + 1];

		memset(diferent_balls, 0, sizeof(diferent_balls));

		for (i = 0; i < num_balls_globe; i++) {
			scanf("%d", &balls[i]);
			diferent_balls[balls[i]] = 1;
			count_lasting--;
		}

		for (i = 0; i < num_balls_globe - 1; i++) {
			for (j = i + 1; j < num_balls_globe; j++) {
				diference_abs = abs(balls[i] - balls[j]);

				if (diferent_balls[diference_abs] == 0) {
					diferent_balls[diference_abs] = 1;
					count_lasting--;
				}
			}
		}

		if (count_lasting != 0) printf("N\n");
		else printf("Y\n");
	}

	return 0;
}
