/* 7. Create a Function That Changes a Number — Medium
Create a function: void changeNumber(int *number)
Inside the function, change the number to 100.
In main():
int number = 10;
Call the function and print the number afterward.

Expected output:
100
The important idea is:
changeNumber(&number); */
#include <stdio.h>
void changeNumber(int *number){
    *number = 100;
}
main(){
    int number = 10;
    changeNumber(&number);
    printf("%d", number);
}
