// 9. Write a C program to print a right justified hollow right angled triangle of height n

#include <stdio.h>
int main() {
    int i, j, N;
    printf("N: ");
    scanf("%d", &N);
    printf("\n");

    for (i = 1 ; i <= N ; i++){
        for (j = 1 ; j <= N - i ; j++)
            printf("  ");

        for (j = 1 ; j <= i; j++)
            if (i == N || j == 1 || j == i)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }

    return 0;
}
