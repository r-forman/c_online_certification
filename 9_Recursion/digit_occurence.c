
#include <stdio.h>
#define SIZE 10

// This was an attempt at a clever way to scale
// the modulus to continue parsing an int
// However, the modules of 154 % 100 = 54, not 5!
/*
int intToArray(int *arr, int integer)
{
    for (int i = 0; i < SIZE; i++)
    {
        int scalar = 1;
        for (int j = 0; j <= i; j++)
            scalar *= 10;
        arr[i] = integer % scalar;
        printf("arr[i] = %i\n", arr[i]);
    }
}
*/

int digitCounter(int integer, int digit)
{
    if (integer / 10 < 1)
        return (integer % 10 == digit)? 1:0;
    else
        if (integer % 10 == digit)
            return 1 + digitCounter(integer/10, digit);
        else
            return 0 + digitCounter(integer/10, digit);
}


void main()
{
    int integer, digit;
    printf("Integer: ");
    scanf("%i", &integer);
    printf("Digit: ");
    scanf("%i", &digit);
    printf("%i\n", digitCounter(integer, digit)%2==0?1:0);


}