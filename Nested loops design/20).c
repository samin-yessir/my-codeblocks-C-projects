/* 20.
*
**
***
****
***
**
*

*/
#include <stdio.h>
void main() {
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
        for (i = 1; i < n ; i++){
            for (j = 1 ; j <= n - i ; j++){
                printf("*");
        }
        printf("\n");
    }

}
