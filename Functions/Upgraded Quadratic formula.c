#include <stdio.h>
#include <math.h>

float square_root(float a, float b, float c)
{
    float discriminant;
    discriminant = pow(b,2) - 4*a*c;

    if (discriminant<0)
    {
        printf("Equation has complex roots.\n");
        return 0;
    }
    return sqrt(discriminant);
}

int main()
{
    float a, b, c, discriminant_value, root1, root2;

    printf("Enter a, b, c = ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("a cannot be 0\n");
        return 0;
    }
    discriminant_value = square_root(a, b, c);
    if (discriminant_value == 0)
    {
        return 0;
    }
    root1 = (- b + discriminant_value)/(2*a);
    root2 = (- b - discriminant_value)/(2*a);

    printf("The two roots are = %.2f, %.2f\n", root1, root2);

    return 0;
}
