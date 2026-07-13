#include <stdio.h>

int main() {
    int A[11];
    int i;
    int lowest;

    for (i = 0; i <= 10; i++) {
        scanf("%d", &A[i]);
    }

    lowest = A[0];
    for (i = 1; i <= 10; i++) {
        if (A[i] < lowest) {
            lowest = A[i];
        }
    }

    printf("The lowest number is: %d\n", lowest);

    return 0;
}
