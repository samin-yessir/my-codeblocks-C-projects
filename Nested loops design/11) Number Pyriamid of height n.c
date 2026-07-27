/* 11. Write a C program to print a number pyramid of height n
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
*/

#include <stdio.h>
int main() {
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= n - i ; j++){
            printf("  ");
        }
        for (j = 1 ; j <= 2 * i - 1 ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
