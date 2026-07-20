/* 4. Change Two Variables Using Pointers — Easy
Declare:
int firstNumber = 10;
int secondNumber = 20;

Create pointers to both variables.
Using the pointers:
Change firstNumber to 100
Change secondNumber to 200

Print both variables normally.
Expected output:
First number = 100
Second number = 200 */
#include <stdio.h>
main(){
    int firstNumber = 10;
    int secondNumber = 20;
    int *firstPointer = &firstNumber;
    int *secondPointer = &secondNumber;

    *firstPointer = 100;
    *secondPointer = 200;

    printf("First number = %d\n", *firstPointer);
    printf("Second number = %d\n", *secondPointer);

}
