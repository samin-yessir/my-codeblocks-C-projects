#include <stdio.h>
int main(){
    int i, n;
    int val[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Which INDEX would you like to DELETE = ");
    scanf("%d", &n);

    // Guard against invalid array bounds
    if (n < 0 || n >= 10) {
        printf("Invalid index! Please enter a value between 0 and 9.\n");
        return 1;
    }

    for (i = n ; i < 9 ; i++){
        val[i] = val[i + 1];
    }

    printf("New array = [");
    for (i = 0 ; i < 9 ; i++){
        printf("%d%s", val[i], (i == 8) ? "" : ", ");
    }
    printf("]\n");
    return 0;
}

