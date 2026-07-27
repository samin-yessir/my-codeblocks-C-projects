// 1. Square pattern for N lines
#include <stdio.h>

void main(){
    int i, j, N;
    printf("N: ");
    scanf("%d", &N);
    printf("\n");

    for (i = 1 ; i <= N ; i++){
        for (j = 1 ; j <= N ; j++){
            printf("* ");
        }
        printf("\n");
    }

}




