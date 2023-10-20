

#include <stdio.h>
#include <string.h>


int palChekr(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        // If the value isn't the same as the end, break (early)
        // Must add another as final char is \0
        if (string[i] != string[strlen(string)-i-1])
        {
            printf("Not a palindrome\n");
            return 1;
        }
        
    }
    return 0;
}

void main()
{
    char userStr[20];
    printf("Please enter word to check if its a palindrome: ");
    scanf("%20s", userStr);
    //puts(userStr);
    int pass = 0;
    pass = palChekr(userStr);
    if (pass == 0)
        printf("Palindrome!\n");

}