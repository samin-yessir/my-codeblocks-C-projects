/* 13. Write a C program to print a this inverted pyramid
    * * * * *
     * * * *
      * * *
       * *
        *
*/

#include <stdio.h>
int main() {
    int i, j, n;
    int star;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i  ; j++)
            printf(" ");

        for (j = i ; j <= n ; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
