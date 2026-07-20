/* 6. Compare Two Numbers Using Pointers — Easy
Declare:
int firstNumber = 25;
int secondNumber = 40;

Create pointers to both variables.
Using the pointers and an if-else statement, determine which number is larger.
Expected output:
40 is larger

Try to make the program work even if the values are changed. */
#include <stdio.h>
main(){
    int firstNumber = 25;
    int secondNumber = 40;
    int *firstPointer = &firstNumber;
    int *secondPointer = &secondNumber;

    if (*firstPointer > *secondPointer)
        printf("%d is larger", *firstPointer);
    else if (*secondPointer > *firstPointer)
        printf("%d is larger", *secondPointer);
    else
        printf("Both numbers are equal");

}
