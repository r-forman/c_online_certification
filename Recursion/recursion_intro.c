
//#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int sumIt(int val, int sum, int i)
{
    if (i <= val)
    {
        sum+=i;
        i++;
        sumIt(val, sum, i);
    }
    else
        return sum;
}

// Professor's solution that is more optimized
int sumUpTo(int num)
{
    // This is called the "Base Case"
    if (num == 1)
        return 1;
    return num + sumUpTo(num-1);
}

void main()
{
    int input, sum=0, i=0, result;
    printf("Value: ");
    scanf("%i", &input);
    result = sumIt(input, sum, i);
    printf("Summation = %i\n", result);
    result = sumUpTo(input);
    printf("Professors = %i\n", result);

}