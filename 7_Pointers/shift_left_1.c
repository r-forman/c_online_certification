
#include <stdio.h>

#define SIZE 9

void main()
{

    int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
    int temp[SIZE] = {};

    int *source_ptr = arr;
    int *temp_ptr = temp;
    // Prior for verification
    printf("Prior to shift: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", temp[i]);
    }
    // Shift values left
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0)
        {
            temp[SIZE-1] = arr[i];
            temp[i] = arr[i+1];
        }
        else if (i == SIZE-1)
            continue;
        else
            temp[i] = arr[i+1];
    }
    printf("\nAfter shift: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", temp[i]);
    }
    printf("\n");

}