
#include <stdio.h>

void main()
{

    int num[7];
    printf("Please enter your number: \n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%i", &num[i]);
    }
    // For this, we will find the INDEX of the largest value
    int ind = 0;
    for (int j = 0; j < 7; j++)
    {
        if (num[j] > num[ind])
        {
            ind = j;
        }
    }
    printf("The largest number is %i at position %i\n", num[ind], ind);
}