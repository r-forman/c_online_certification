
#include <stdio.h>

void main()
{
    // Array of characters
    char charsArray[] = {'H','e', 'l', 'l', 'o'};
    
    // String Initialization - 2 methods
    /*
    Strings are arrays of characters
    with the last element being '\0'
    */
    // \0 is known as the "NULL character"
    // Method 1
    char str1[] = {'H','e', 'l', 'l', 'o', '\0'};
    // Method 2
    char str2[]="Hello";

    char testStr[10]="123456789";

    printf("For loop: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\nWhile loop:\n");
    int j = 0;
    while (testStr[j] != '\0')
    {
        printf("%c",testStr[j]);
        j++;
    }
    
    //printf("%c\n", str2);
    //printf("%c\n", testStr);
    printf("\n");
}