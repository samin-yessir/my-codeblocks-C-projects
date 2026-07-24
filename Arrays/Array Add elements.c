#include <stdio.h>
int main(){
    int i, n, num;
    int val[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0 = NULL
          //index: 0  1  2  3  4  5  6  7  8  9

    printf("Which NUMBER would you like to ADD into the array = ");
    scanf("%d", &num);
    printf("In which INDEX would you like to add the number to (0 to 10) = ");
    scanf("%d", &n);

    for (i = 9 ; i >= n ; i--){
        val[i+1] = val[i];
    }
    val[n] = num;

    printf("{");
    for (i = 0 ; i < 11 ; i++){
        printf("%d%s", val[i], (i == 10) ? "}" : ", ");
    }

    return 0;
}
