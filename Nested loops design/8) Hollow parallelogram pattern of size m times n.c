// 8. Write a C program to print a hollow parallelogram pattern of size m*n
#include <stdio.h>

int main() {
    int i, j, m, n;

    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    for (i = 1; i <= m; i++) {

        for (j = 1 ; j <= m - i ; j++)
            printf("  ");

        for (j = 1 ; j <= n ; j++)
            if (i == 1 || i == m || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }

    return 0;
}
