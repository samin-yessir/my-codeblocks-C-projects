//3. 1+2+3 ... upto 100
#include <stdio.h>
main()
{
    int num = 1, sum = 0;
    printf("*** 1+2+3 ... upto 100 ***\n");

    while(num <= 100)
    {
        sum += num;
        num++;
    }
    printf("Sum = %d\n", sum);

}
