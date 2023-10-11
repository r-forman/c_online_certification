
#include <stdio.h>
#include <math.h>

int main(){

    // char myChar1 = 'a';
    char myChar1;
    printf("Please insert a character: ");
    scanf("%c", &myChar1);

    printf("Character: %c\n", myChar1);
    printf("Decimal ASCII code: %d\n", myChar1);
    printf("Hexadecimal ASCII code: %X\n", myChar1);

    char myChar2 = 'a', myChar3 = 97, myChar4 = 0x61;
    
    printf("Character: %c\n", myChar2);
    printf("Character: %c\n", myChar3);
    printf("Character: %c\n", myChar4);

    return 0;
}