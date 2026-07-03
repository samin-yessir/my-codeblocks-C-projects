//6. 1/2^2+2/3^3 ....(10 numbers)
#include <stdio.h>
#include <math.h>
main() {
    printf("*** 1/2^2 + 2/3^3 + ... + 10/11^11\n ***");

    double num = 1;
    double sum = 0;

    while(num < 11){
        sum = sum + (num/pow((num+1),(num+1)));
        num++;
    }

    printf("Sum = %lf\n", sum);
}


