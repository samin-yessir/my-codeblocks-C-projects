#include <stdio.h>
int main()
{
    char dept;
    int sem;
    printf("Enter the first letter (UPPERCASE) of your department from either CSE or EEE = ");
    scanf(" %c", &dept);
    printf("Enter your semester number = ");
    scanf(" %d", &sem);
    if (dept == 'C') {
        if (sem == 1)
            printf("CSE - %d", dept, sem);
        else if (sem == 2)
            printf("CSE - %d", dept, sem);
        else if (sem == 3)
            printf("CSE - %d", dept, sem);
        else if (sem == 4)
            printf("CSE - %d", dept, sem);
    }
    if (dept == 'E') {
        if (sem == 1)
            printf("EEE - %d", dept, sem);
        else if (sem == 2)
            printf("EEE - %d", dept, sem);
        else if (sem == 3)
            printf("EEE - %d", dept, sem);
        else if (sem == 4)
            printf("EEE - %d", dept, sem);
    }
    return 0;
}
