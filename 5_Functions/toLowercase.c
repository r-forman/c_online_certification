
#include <stdio.h>

char toLower(char l)
{
    l+=32;
    return l;
}

char anothertoLower(char let)
{
    return let - 'A' + 'a';
}


void main(){

    char letter, lowered;
    do
    {
        // Why does this print twice?
        printf("Letter: ");
        scanf("%c", &letter);
    } while (letter < 64 || letter > 90);
    
    // lowered = toLower(letter);
    lowered = anothertoLower(letter);
    printf("Lowercased: %c\n", lowered);
}