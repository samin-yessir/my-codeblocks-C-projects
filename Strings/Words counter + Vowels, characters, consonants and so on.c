// Count the Number of Words, Vowels, Consonants and so on
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000];
    int vowels, consonant, space, digit, characters, words;
    vowels = consonant = space = digit = characters = words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0 ; str[i] != '\0' ; i++) {

        str[i] = tolower(str[i]);

        //Words
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;

        //Characters
        characters++;
        //Vowel
         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        //Consonants
        else if(str[i] >= 'a' && str[i] <= 'z')
            consonant++;
        //Digits
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        //Spaces
        else if(str[i] == ' ')
            space++;
    }
    printf("\nWords: %d", words);
    printf("\nCharacters: %d", characters);
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d\n", space);

return 0;
}
