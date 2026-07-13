#include <stdio.h>
#include <math.h>
int main()
{
    int i, sum = 0, highest, lowest;
    int M[10];
    float avg, variance = 0.0, SD;

    //Input
    for(i = 0; i < 10; i++){
        printf("Enter number %d = ", i+1);
        scanf("%d", &M[i]);
    }
    //Sum
    for(i = 0; i < 10; i++){
        sum += M[i];
    }
    //Average
    avg = (float)sum / 10;

    //Highest marks
    highest = M[0];
    for(i = 1; i < 10; i++){
        if (M[i] > highest){
            highest = M[i];
        }
    }

    //Lowest marks
    lowest = M[0];
    for(i = 1; i < 10; i++){
        if (M[i] < lowest){
            lowest = M[i];
        }
    }

    //Variance
    for(i = 0; i < 10; i++){
        variance = variance + (M[i] - avg)*(M[i] - avg);
    }
    variance = variance/10;

    //Standard deviation
    SD = sqrt(variance);

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Highest mark = %d\n", highest);
    printf("Lowest mark = %d\n", lowest);
    printf("Variance = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", SD);


return 0;
}

