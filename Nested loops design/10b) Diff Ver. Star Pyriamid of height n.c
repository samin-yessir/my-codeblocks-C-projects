// 10a. Write a C program to print a star pyramid of height n

#include <stdio.h>
int main() {
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");
    int space = n - 1;

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= space ; j++){
            printf(" ");}
        for (j = 1 ; j <= i ; j++){
            printf("* ");}

        printf("\n");
        space--;
    }

    return 0;
}


