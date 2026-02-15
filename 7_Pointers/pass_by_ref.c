
#include <stdio.h>

int findMax(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

/* If wanted to do the same for 2 variables
int findMinMax(int num1, int num2)
{
    int min, max;
    if (num1 > num2)
    {
        min = num2;
        max = num1;
    }
    else
    {
        min = num1;
        max = num2;
    }
    // This return does not work in C! Can only return 1 value
    return min, max;
}
*/

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
    // No need for a return
}


void main()
{
    int a = 5, b = 7;
    int max;
    max = findMax(a, b);
    printf("max between %d and %d is %d\n", a, b, max);

    // Now unify
    int min;
    findMinMax(a, b, &max, &min);
    printf("max between %d and %d is %d\n", a, b, max);
    printf("min between %d and %d is %d\n", a, b, min);
    
}