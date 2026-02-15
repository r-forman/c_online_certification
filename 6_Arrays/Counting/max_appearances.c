
#include <stdio.h>
#define SIZE 8
#define RANGE 6

void main()
{
    int arr[SIZE]={7,5,6,9,6,7,10,7}, counter[RANGE]={};

    // Count the occurences of each int
    for (int i = 0; i < SIZE; i++)
        counter[arr[i]-5]++;
    // Print cleanly to the console
    printf("[");
    for (int j = 0; j < RANGE; j++)
        printf(" %i", j+5);
    printf(" ]\n[");
    for (int j = 0; j < RANGE; j++)
        printf(" %i", counter[j]);
    printf("  ]\n");

    // Find the max and #
    int max=0, quant=0, ind=0;
    for (int i = 0; i < SIZE; i++)
        if (arr[i] > max)
        {
            max = arr[i];
        }
    for (int i = 0; i < RANGE; i++)
        if (counter[i] > counter[ind])
        {
            ind = i;
        }
    printf("The largest number was %i\n", max);
    printf("The number with the most occurences was %i. It occurred %i times\n", ind+5, counter[ind]);    


    // The manual, slower way
    // ----
    for (int i = 0; i < RANGE; i++)
    {
        if (counter[i] > quant)
        {
            quant = counter[i];
            ind = i;
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }
    // ----
    printf("The largest number was %i\n", max);
    printf("The number with the most occurences was %i. It occurred %i times\n", ind+5, counter[ind]);    
}