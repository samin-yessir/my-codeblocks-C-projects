#include <stdio.h>

int odd_even(int x)
{
    if (x == 0)
    {
        printf("Even number\n");
    }
    else if (x % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }

    return 0;
}

int main()
{
    int y;
    printf("Enter your number = ");
    scanf("%d", &y);

    odd_even(y);

    return 0;
}
