#include <stdio.h>

int main(void) {
    int i, n;
    char name[] = "Harry Potter";

    for (i = 0; name[i] != '\0'; i++){
        printf("%c", name[i]);
    }

  /*
  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
  */
}
