//4. 1X2X3 ... upto 100

#include <stdio.h>
main() {
    int num = 1;
    double product = 1;
    printf("*** 1 X 2 X 3 ... upto 100 ***\n");

    while (num <= 100){
        product *= num;
        ++num;
    }

    printf("Product = %.5e\n", product);
}
