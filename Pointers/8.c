/*8. Swap Two Numbers Using Pointers — Medium
Declare:
int firstNumber = 10;
int secondNumber = 20;
Create a function:
void swap(int *first, int *second)
The function should swap their values.*/
#include <stdio.h>
void swap(int *first, int *second);
main(){
    int firstNumber = 10;
    int secondNumber = 20;
    swap(&firstNumber, &secondNumber);
    printf("First number = %d\nSecond number = %d\n", firstNumber, secondNumber);
}
void swap(int *first, int *second){
    int temporary;
    temporary = *first;
    *first = *second;
    *second = temporary;
}
