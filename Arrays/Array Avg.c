#include <stdio.h>
int main(){
    int n;
    float sum = 0.0;

    printf("Enter n = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    int Avg[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &Avg[i]);
        sum += Avg[i];
    }

    float avg = (float)sum / n;
    printf("Average = %.3f\n", avg);

return 0;
}
