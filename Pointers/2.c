/*2. Modify using a pointer

Reads an integer.
Uses a pointer to change its value to double.
Prints the new value. */
#include <stdio.h>
main(){
    int a, *p = &a;
    printf("a = ");
    scanf("%d", &a);

    *p = *p * 2;

    printf("%d", a);

    return 0;
}

