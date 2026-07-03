#include <stdio.h>
int  main()
{
    int x, y;
    printf("***PRE-INCREMENT*** \n");
    printf("Enter the integer, x = ");
    scanf("%d", &x);


    y=++x;
    printf("y=++x \n");
    printf("Pre-increment: x = %d, y = %d", x, y);

    return 0;

}
