// 4. 2a: Write a C program to print a hollow rectangle pattern of size m*n
#include <stdio.h>

void main(){
    int i, j, m, n;
    printf("m:");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    for (i = 1 ; i <= m ; i++){
        for (j = 1 ; j <= n ; j++){
            if (i == 1 || i == m || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}
