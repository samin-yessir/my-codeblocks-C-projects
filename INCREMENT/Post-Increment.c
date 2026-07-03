#include <stdio.h>
int  main()
{
    int x, y;
    printf("***POST-INCREMENT*** \n");
    printf("Enter the integer, x = ");
    scanf("%d", &x);


    y=x++;
    printf("y=x++ \n");
    printf("Post-increment: x = %d, y = %d \n", x, y);
    printf("%d",y);
    return 0;

}
