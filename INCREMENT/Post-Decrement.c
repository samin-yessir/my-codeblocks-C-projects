#include <stdio.h>
int  main()
{
    int a, b;
    printf("***POST-DECREMENT*** \n");
    printf("Enter the integer, a = ");
    scanf("%d", &a);


    b=a--;
    printf("b=x-- \n");
    printf("Post-decrement: a = %d, b = %d", a, b);

    return 0;

}
