#include <stdio.h>
int main()
{
    int x, y;
    char sign;

    printf("Enter the first number = ");
    scanf("%d", &x);
    printf("Enter the second number = ");
    scanf("%d", &y);

    printf("Type the operator you want to use: +, -, *, /, %% = ");
    scanf(" %c", &sign);

    if (sign == '+'){
        printf("%d + %d = %d", x, y, x+y);
    }
    else if (sign == '-') {
        printf("%d - %d = %d", x, y, x-y);
    }
    else if (sign == '*') {
        printf("%d * %d = %d", x, y, x*y);
    }
    else if (sign == '/') {
        printf("%d / %d = %d", x, y, x/y);
    }
    else if (sign == '%') {
        printf("%d %% %d = %d", x, y, x%y);
    }
    else{
        printf("Wrong operator!!");
    }

    return 0;
}
