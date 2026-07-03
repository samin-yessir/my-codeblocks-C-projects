#include <stdio.h>

int main()
{
    int x;   // x = marks

    printf("Enter your marks: ");
    scanf("%d", &x);

    if (x > 100 || x < 0)
        printf("Impossible!");

    else if (x > 80)
    {
        printf("You're pushing yourself too much\n");
        printf("Go engage in recreational activities.");
    }

    else if (x > 50)
    {
        printf("Hmm... good enough\n");
        printf("Maybe play a sport, no?");
    }

    else if (x > 40)
    {
        printf("The sweet spot\n");
        printf("Doing great. Keep it up!");
    }

    else if (x > 20)
    {
        printf("Great\n");
        printf("Turn up the notch a little");
    }

    else
    {
        printf("Failure");
    }

    return 0;
}
