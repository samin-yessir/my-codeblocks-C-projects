// 3. Rectangle pattern of size m*n
#include <stdio.h>

void main(){
    int i, j, m, n;
    printf("m:");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);


    for (i = 1 ; i <= m ; i++){
        for (j = 1 ; j <= n ; j++){
            printf("* ");
        }
        printf("\n");
    }

}
