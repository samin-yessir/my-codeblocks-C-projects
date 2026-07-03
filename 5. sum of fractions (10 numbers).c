//5. 1/2+2/3+3/4+  (10 numbers)
#include <stdio.h>
main() {
    printf("*** 1/2 + 2/3 + 3/4 +...+ 10/11\n ***");

    double num = 1;
    double sum = 0;
    while (num < 11) {
        sum = sum + (num/(num+1));
        num++;
    }
    printf("Sum = %lf\n", sum);
}
