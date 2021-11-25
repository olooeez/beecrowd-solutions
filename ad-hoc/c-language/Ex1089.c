#include <stdio.h>

int main() {
    int loop_sample, i;

    while (1) {
        scanf("%d", &loop_sample);
        if (loop_sample == 0) break;

        int magnitudes[loop_sample], result = 0;

        for (i = 0; i < loop_sample; i++) {
            scanf("%d", &magnitudes[i]);
        }

        for (i = 0; i < loop_sample; i++) {
            int before = (i + loop_sample - 1) % loop_sample;
            int after = (i + 1) % loop_sample;

            if (magnitudes[before] > magnitudes[i] && magnitudes[after] > magnitudes[i]) {
                result++;
            } else if (magnitudes[before] < magnitudes[i] && magnitudes[after] < magnitudes[i]) {
                result++;
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
