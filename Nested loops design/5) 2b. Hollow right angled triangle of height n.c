// 5. 2b: Write a C program to print a hollow right angled triangle of height n
#include <stdio.h>

void main(){
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= n ; j++){
            if (i == n || j == 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}
