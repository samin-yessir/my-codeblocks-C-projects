#include <stdio.h>
#include <math.h>

double third_side(double a, double b, double angle)
{
    const double pi = 3.14159265358979323846;
    double radians = angle * (pi/180);

    return sqrt(a*a + b*b - 2*a*b*cos(radians));
}

int main()
{
    double a, b, angle;

    printf("Enter 1st side = ");
    scanf("%lf", &a);

    printf("Enter 2nd side = ");
    scanf("%lf", &b);

    printf("Enter angle opposite the third side = ");
    scanf("%lf", &angle);

    printf("The third side is %.3lf", third_side(a, b, angle));

    return 0;
}
