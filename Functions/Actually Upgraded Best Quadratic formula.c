#include <stdio.h>
#include <math.h>

float discriminant(float a, float b, float c)
{
    float discriminant = b*b - 4*a*c;

    return discriminant;
}

int main()
{
    float a, b, c, disc, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("a cannot be 0 as it does not represent a quadratic equation.\n");
        return 0;
    }
    disc = discriminant(a, b, c);
    if (disc < 0)
    {
        printf("The roots are complex/imaginary.\n");
        return 0;
    }
    else if (disc == 0)
    {
        printf("Equation has one root = %.2f", -b/(2*a));
        return 0;
    }
    else
    {
        disc = sqrt(disc);
        root1 = (- b + disc)/(2*a);
        root2 = (- b - disc)/(2*a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    return 0;
}
