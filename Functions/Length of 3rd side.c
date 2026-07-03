#include <stdio.h>
#include <math.h>

double sum_of_power(double a, double b)
{
    double sum = pow(a,2) + pow(b,2);
    return sum;
}

double cos_angle(double angle)
{
    double PI = 3.14159265358979323846;
    double radians = angle * (PI/180);
    double cosine = cos(radians);
    return cosine;
}
int main()
{
    double a, b, c, angle;
    printf("Enter 1st side = ");
    scanf("%lf", &a);
    printf("Enter 2nd side = ");
    scanf("%lf", &b);
    printf("Enter angle opposite of the third side = ");
    scanf("%lf", &angle);

    double power_sum = sum_of_power(a, b);
    double cosine_angle = cos_angle(angle);
    c = sqrt(power_sum - 2*a*b*radian_angle);
    printf("The third side is %.3lf\n", c);

}
