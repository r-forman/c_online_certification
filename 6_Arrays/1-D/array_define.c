
#include <stdio.h>
#define SIZE 7

void main()
{

    int num[SIZE];
    printf("Please enter your number: \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%i", &num[i]);
    }
    // For this, we will find the INDEX of the largest value
    int ind = 0;
    for (int j = 0; j < SIZE; j++)
    {
        if (num[j] > num[ind])
        {
            ind = j;
        }
    }
    printf("The largest number is %i at position %i\n", num[ind], ind);
}