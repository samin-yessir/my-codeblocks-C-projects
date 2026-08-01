//Find the Frequency of Characters in a String
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    //array_name[ index_returned_by_strcspn(array_name, "characters_to_find") ] = replacement_character;

    printf("Enter the character you want to find the frequency of: ");
    scanf("%c", &ch);
    char CH = tolower(ch);

    for(int i = 0 ; str[i] != '\0' ; i++){
        if(tolower(str[i]) == CH)
            count++;
    }

    printf("'%c' appears %d times in the string '%s'.\n", ch, count, str);

    return 0;
}
