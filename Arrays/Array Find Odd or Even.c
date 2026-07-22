#include <stdio.h>
int main(){
    int val[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("---- odd or even ----\n");

    for (int i = 0 ; i < 10 ; i++){
        // No 'if' statement needed — ternary handles both Even and Odd!
        printf("%d is %s\n", val[i], (val[i] % 2 == 0) ? "Even" : "Odd"); // <--- Ternary Operator
        }

    return 0;
}
