#include <stdio.h>

int main()
{
    float F, C;
    char AB;

    printf("Enter A if you want to C to F\nEnter B if you want to F to C: ");
    scanf(" %c", &AB);

    switch (AB){
    case 'A':
    case 'a':
        printf("Enter your temp in Celcius = ");
        scanf("%f", &C);
        F = (C*9)/5+32;
        printf("Temp = %f degrees F", F);
        break;
    case 'B':
    case 'b':
        printf("Enter your temp in Fahrenheit = ");
        scanf("%f", &F);
        C = ((F -32)*5)/9;
        printf("Temp = %f degrees C", C);
        break;
    default:
        printf("IDK");
    }

   return 0;
}
