#include <stdio.h>
#include <math.h>

float quad_positive(float a, float b, float c)
{
    float positive_root = - b + sqrt(b*b - 4*a*c);

    return positive_root;
}

float quad_negative(float a, float b, float c)
{
    float negative_root = - b - sqrt(b*b - 4*a*c);
    return negative_root;
}

int main()
{
    float a, b, c, sqrt1, sqrt2, root1, root2;
    printf("Enter a, b and c = ");
    scanf("%f %f %f", &a, &b, &c);

    sqrt1 = quad_positive(a, b, c);
    root1 = (sqrt1)/(2*a);

    sqrt2 = quad_negative(a, b, c);
    root2 = (sqrt2)/(2*a);

    printf("The two roots are = %.2f, %.2f", root1, root2);

    return 0;
}
