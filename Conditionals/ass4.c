
#include <stdio.h>

int main(){

    char myChar;
    printf("Please enter a character: ");
    scanf("%c", &myChar);

    // Create the nibble for the Hexadecimal value
    int bit1, bit2, bit3, bit4;
    int dec;
    // Convert an integer between 0 and 9
    if (myChar >= '0' && myChar <= '9')
        dec = myChar - 48;
    // Convert a character used in Hex: A-F
    else if (myChar >= 'A' && myChar <= 'F')
        dec = myChar - 55;
    //printf("decimal: %i\n", dec);

    bit2 = dec / 2;
    bit1 = dec % 2;
    bit3 = bit2 / 2;
    bit2 = bit2 % 2;
    bit4 = bit3 / 2;
    bit3 = bit3 % 2;

    printf("%i", bit4);
    printf("%i", bit3);
    printf("%i", bit2);
    printf("%i\n", bit1);

    return 0;
}