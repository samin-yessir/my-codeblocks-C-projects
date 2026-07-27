/*
    A
   B B
  C C C
 D D D D
E E E E E
*/
#include <stdio.h>
int main() {
    int i, j, n;
    char letter = 'A';
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= n - i  ; j++)
            printf(" ");

        for (j = 1 ; j <= i ; j++) {
            printf("%c ", letter);
        }

        printf("\n");
        letter++;
    }

    return 0;
}

