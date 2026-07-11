#include <stdio.h>

main()
{
    int i, j, h, l;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (h = 0; h < 3; h++)
                {
                    for (l = 0; l < 2; l++)
                    {
                        printf("%d %d %d %d\n", i, j, h, l);
                    }
                }
            }
        }
}
