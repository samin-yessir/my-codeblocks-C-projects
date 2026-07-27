// 6. Rhombus pattern for N lines (Left shift)
#include <stdio.h>

int main(){
    int i, j, N;
    printf("N: ");
    scanf("%d", &N);
    printf("\n");


    for (i = 1 ; i <= N ; i++){
        for (j = 1 ; j <= N - i ; j++)
            printf("  ");
        for (j = 1 ; j <= N  ; j++)
            printf("* ");

        printf("\n");
    }


return 0;
}
