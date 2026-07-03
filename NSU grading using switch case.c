#include <stdio.h>

int main()
{
    int marks, converted;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    converted = marks/10;

    switch(converted)
    {
    case 9:
    case 10:
        printf("A+");
        break;
    case 8:
        printf("A");
        break;
    case 7:
        printf("B");
        break;
    case 6:
        printf("C");
        break;
    case 5:
        printf("D");
        break;
    default:
        printf("Fail or wrong marks inputted.");
        break;
    }

    printf("\n");
    return 0;

}
