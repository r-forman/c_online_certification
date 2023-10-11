
#include <stdio.h>

int main(){

    char myChar;
    printf("Enter a character: ");
    scanf("%c", &myChar);

    /*
    printf("Character: %c\n", myChar);
    printf("Decimal: %d\n", myChar);
    printf("Character: %c\n", (double)myChar);
    */

    if (myChar >= 'a' && myChar <= 'z')
        printf("%c is lower case\n", myChar);
    else if (myChar >= 'A' && myChar <= 'Z')
        printf("%c is UPPER case\n", myChar);
    else if (myChar >= '0' && myChar <= '9')
        printf("%c is a #\n", myChar);
    else
        printf("%c is an other type\n", myChar);

    return 0;
}