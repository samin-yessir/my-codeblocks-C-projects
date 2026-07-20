/* 3. Print Two Variables Using Pointers — Easy
Declare:
int firstNumber = 10;
int secondNumber = 20;
Create a pointer for each variable.
Print:
First number = 10
Second number = 20
But the values must be printed using dereferencing: */
#include <stdio.h>
main(){
    int firstNumber = 10;
    int secondNumber = 20;
    int *firstPointer = &firstNumber;
    int *secondPointer = &secondNumber;

    printf("First number = %d\n", *firstPointer);
    printf("Second number = %d\n", *secondPointer);
}
