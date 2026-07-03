#include <stdio.h>
int  main()
{
    int a, b;
    printf("***PRE-DECREMENT*** \n");
    printf("Enter the integer, a = ");
    scanf("%d", &a);


    b=--a;
    printf("b=--x \n");
    printf("Pre-decrement: a = %d, b = %d", a, b);

    return 0;

}
