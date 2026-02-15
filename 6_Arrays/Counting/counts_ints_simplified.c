
#include <stdio.h>

#define SIZE 10

void main()
{
    int counter[SIZE]={}, arr[SIZE];
    // Take in the values from the operator
    for (int i=0; i<SIZE; i++)
    {
        printf("Next element: ");
        scanf("%i", &arr[i]);
    }
    // Run the function the way I initially designed
    for (int i = 0; i < SIZE; i++)
    {
        counter[arr[i]]++;
    }
    // Print out all clean-like
    printf("Number:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %i", i);
    }
    printf(" ]\nCounts:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %i", counter[i]);
    }
    printf(" ]\n");
}