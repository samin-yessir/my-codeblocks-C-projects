#include <stdio.h>

int main()
{
    // SUM OF N NATURAL NUMBERS

    int count, num, sum = 0;
    printf("Enter your number = ");
    scanf("%d", &num);

    for(count=1; count<=num; ++count)
    {
       sum += count;
    }

    printf("Sum= %d", sum);

    return 0;
}
