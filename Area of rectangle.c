#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    z= x*y;

    printf("Area = x * y = %.1f * %.1f = %.1f", x, y, z);
}
