#include <stdio.h>
int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("\n");
    printf("Pre-increment of a = %d \n", ++a);
    printf("Post-increment of b = %d \n", b++);

    //New value of b
    printf("New value of b after post-increment = %d \n", b);

    return 0;

}
