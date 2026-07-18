#include <stdio.h>
int main(){
    int i, num;
    int val[5] = {10, 20, 30, 40, 50};
    int found = 0; // Our flag tracker: 0 means not found, 1 means found

    printf("Which number would you like to search for = ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++) {
        if (val[i] == num){
            printf("Index = %d\n", i);
            printf("No. of term-th = %d\n", i+1);
            found = 1; // Mark that we found it!
            break;     // No need to keep looking, we can exit the loop early
        }
    }
    // This condition only runs ONCE after inspecting all elements
    if (found == 0) {
        printf("Number not in array\n");
    }

    return 0;
}
