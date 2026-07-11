/* 1. Print using pointers (Very Easy)

Declare an integer variable a = 25.
Declare a pointer to a.
Print:
value of a
address of a
value stored in the pointer
value pointed to by the pointer */

#include <stdio.h>
main(){
    int a = 25;
    int *p;
    p = &a;

    printf("value of a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value stored in the pointer = %p\n", p);
    printf("value pointed to by the pointer = %d\n", *p);

}

