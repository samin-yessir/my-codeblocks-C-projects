/* 9. Pointer-Based Calculator — Medium/Hard
Create four functions:
void add(int *a, int *b, int *result);
void subtract(int *a, int *b, int *result);
void multiply(int *a, int *b, int *result);
Given:
int firstNumber = 20;
int secondNumber = 5;

Use pointers to calculate:
Addition = 25
Subtraction = 15
Multiplication = 100

The result should also be changed using a pointer.
For example:
add(&firstNumber, &secondNumber, &result); */
#include <stdio.h>
void add(int *a, int *b, int *result){
    *result = *a + *b;
}
void subtract(int *a, int *b, int *result){
    *result = *a - *b;
}
void multiply(int *a, int *b, int *result){
    *result = *a * *b;
}

main(){
    int firstNumber = 20;
    int secondNumber = 5;
    int result;

    add(&firstNumber, &secondNumber, &result);
    printf("Sum = %d\n", result);
    subtract(&firstNumber, &secondNumber, &result);
    printf("Difference = %d\n", result);
    multiply(&firstNumber, &secondNumber, &result);
    printf("Product = %d\n", result);

}
