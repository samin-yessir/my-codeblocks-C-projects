#include <stdio.h>
int main()
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    printf("Pre-decrement of x = %d \n", --x);
    printf("Post-decrement of y = %d \n", y--);

    //New value of y
    printf("New value of y after post-decrement = %d \n", y);

    return 0;

}
