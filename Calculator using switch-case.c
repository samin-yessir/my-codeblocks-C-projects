#include <stdio.h>

int main(){

    float n1, n2;
    char opt;

    printf("Enter two number = ");
    scanf("%f %f", &n1, &n2);
    printf("Enter any one of the operator: (+, -, *, /) : ");
    scanf(" %c", &opt);

    switch(opt){
    case '+':
        printf("%f + %f = %f", n1, n2, n1+n2);
        break;
    case '-':
        printf("%f - %f = %f", n1, n2, n1-n2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
        break;
    case '/':
        if (n2!=0)
            printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
        else
            printf("Cannot divide by 0");
        break;
    default:
        printf("Error inputting operator");
        break;
    }

    return 0;
}
