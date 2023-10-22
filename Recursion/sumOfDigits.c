

#include <stdio.h>

int sumOfDig(int num)
{
    // Base Case - We run out of digits
    if (num/10 < 1)
        return num % 10;
    // Otherwise, give modulo and loop for next digit
    return num % 10 + sumOfDig(num/10);
}

void main()
{
    int value, result;
    printf("Value: ");
    scanf("%i", &value);

    result = sumOfDig(value);
    printf("Result = %i\n", result);
}