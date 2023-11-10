

#include <stdio.h>

#define SIZE 10

int counting(int *arr, int num)
{
    int count=0;
    for (int j = 0; j < SIZE; j++)
    {
        if (arr[j] == num)
        {
            count++;
        }
    }
    return count;
}
int counterInPlace(int *better, int *arr)
{
    for (int j = 0; j < SIZE; j++)
    {
        better[arr[j]]++;
    }
    
    // Print out all clean-like
    printf("Prof's Way ---\nNumber:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %i", i);
    }
    printf(" ]\nCounts:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %i", better[i]);
    }
    printf(" ]\n");
    //return better;
}

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
        counter[i] = counting(arr, i);
        printf("Number of %i: %i\n", i, counter[i]);
    }
    // Print out all clean-like
    printf("My way ---\nNumber:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        counter[i] = counting(arr, i);
        printf(" %i", i);
    }
    printf(" ]\nCounts:\t[");
    for (int i = 0; i < SIZE; i++)
    {
        counter[i] = counting(arr, i);
        printf(" %i", counter[i]);
    }
    printf(" ]\n");

    /* Leveraging professor's method */
    int better[SIZE]={};
    counterInPlace(better, arr);




}