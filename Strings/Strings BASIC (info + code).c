#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
/*

char buffer[50];
// Safely reads up to 49 characters + 1 null terminator
fgets(buffer, sizeof(buffer), stdin);

Note: It includes the newline character (\n) in the destination string if there is room.
You can strip it using strcspn():
cbuffer[strcspn(buffer, "\n")] = '\0';


char buffer[50];
// Limits input to 49 characters, but stops at the first whitespace
scanf("%49s", buffer);

// To include spaces (scanset method):
scanf("%49[^\n]", buffer);

*/
