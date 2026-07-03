#include <stdio.h>

int main()
{
    int y; // y = marks

    printf("Enter your marks = ");
    scanf("%d", &y);

    if (y>100 || y<0)
        printf("Invalid marks");
    else if (y >= 93){
        printf("Letter grade = A Excellent\n");
        printf("GPA = 4.0");
    }
    else if (y >= 90){
        printf("Letter grade = A-\n");
        printf("GPA = 3.7");
    }
        else if (y >= 87){
        printf("Letter grade = B+\n");
        printf("GPA = 3.3");
    }
        else if (y >= 83){
        printf("Letter grade = B Good\n");
        printf("GPA = 3.0");
    }
        else if (y >= 80){
        printf("Letter grade = B-\n");
        printf("GPA = 2.7");
    }
        else if (y >= 77){
        printf("Letter grade = C+\n");
        printf("GPA = 2.3");
    }
        else if (y >= 73){
        printf("Letter grade = C Average\n");
        printf("GPA = 2.0");
    }
        else if (y >= 70){
        printf("Letter grade = C-\n");
        printf("GPA = 1.7");
    }
        else if (y >= 67){
        printf("Letter grade = D+\n");
        printf("GPA = 1.3");
    }
        else if (y >= 60){
        printf("Letter grade = D Poor\n");
        printf("GPA = 1.0");
    }
        else {
        printf("Letter grade = F\n");
        printf("GPA = 0.0");
    }

    return 0;

}
