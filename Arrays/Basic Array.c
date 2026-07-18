#include <stdio.h>
int main(){
    int i, n;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    int val[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d = ", i+1);
        scanf("%d", &val[i]);
    }
    printf("Array values = [ ");
    for (i = 0; i < n; i++) {
        printf(" %d ", val[i]);
    }
    printf("] ");

return 0;
}

