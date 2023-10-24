

#include <stdio.h>
#define SIZE 5

// This function can also be optimized with a ternary
int sumDigits(int val)
{
    if (val / 10 > 0)
        return val % 10 + sumDigits(val/10);
    else
        return val;
}

// While this works, can be improved with a simple ternary! See below
int evaluateSum(int total)
{
    if (total % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    // This works - but can be optimized
    printf("%i\n",evaluateSum(sumDigits(num)));
    // If sum is an odd, return 0. If even, return 1
    printf("%i\n",(sumDigits(num))%2==1?0:1);
    

}