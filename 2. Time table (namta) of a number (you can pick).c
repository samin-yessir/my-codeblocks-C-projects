//2. Time table (namta) of a number (you can pick)
#include <stdio.h>
main()
{
    int count = 1, num;
    printf("***Time table of a number up to 10 times***\n");
    printf("Pick a numer: ");
    scanf("%d", &num);

    while (count <= 10)
    {
        printf("%d * %d = %d\n", num, count, num*count);
        ++count;
    }
}

