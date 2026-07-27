/*
1
23
456
7890
12345
*/
#include <stdio.h>
int main() {
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    printf("\n");
    int num = 1;

    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++) {
            printf("%d ", num);
            num++;
            if (num == 10)
                num = 0;
        }
        printf("\n");

    }

    return 0;
}

