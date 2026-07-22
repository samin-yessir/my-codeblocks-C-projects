#include <stdio.h>
int main(){
    int i, n;
    int val[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Which number would you like to DELETE = ");
    scanf("%d", &n);

    for (i = 0 ; i < 10 ; i++){
        if (val[i] == n)
            printf();
    }


    return 0;
}
