/* 14. Write a C program to print a this
      A
     A B
    A B C
   A B C D
  A B C D E

*/

#include <stdio.h>
int main() {
    int i, j, n;
    char letter = 'A';
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= n - i ; j++)
            printf(" ");

        for (j = 1 ; j <= i ; j++) {
            printf("%c ", letter);
            letter++;
        }

        printf("\n");
        letter = 'A';

    }

    return 0;
}
