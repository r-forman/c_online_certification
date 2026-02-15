

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

void main()
{
    int counter[SIZE]={}, arr[SIZE];
    for (int i=0; i<SIZE; i++)
    {
        printf("Next element: ");
        scanf("%i", &arr[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        counter[i] = counting(arr, i);
        printf("Number of %i: %i\n", i, counter[i]);
    }
    printf("Number:\t[");
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
}