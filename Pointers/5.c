/* 5. Add Two Numbers Using Pointers — Easy
Declare:
int firstNumber = 15;
int secondNumber = 25;
Create pointers to both variables.
Using the pointers, calculate their sum.
Expected output:
Sum = 40

Your calculation should use:
*firstPointer
*secondPointer */
#include <stdio.h>
main(){
    int firstNumber = 15;
    int secondNumber = 25;
    int *firstPointer = &firstNumber;
    int *secondPointer = &secondNumber;
    int sum;

    sum = *firstPointer + *secondPointer;

    printf("Sum = %d\n", sum);
}
