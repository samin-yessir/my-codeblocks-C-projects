// 12) Sum of a series
#include <stdio.h>
int main() {
    int i, j, n;
    float sum = 0.0;
    float term;

    printf("n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = 0;

        for (j = 1; j <= i; j++) {
            term = term + 1.0 / j;
        }
        sum += term;
    }

    printf("Sum = %f", sum);

    return 0;
}
