
// Same core functionality as shift 1, 
// but loop it for N times.
#include <stdio.h>

#define SIZE 9

void main()
{

    int shiftN;
    printf("Shift how many? ");
    scanf(" %i", &shiftN);

    int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
    int temp[SIZE] = {};

    // Prior for verification
    printf("Prior to shift: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    // Loop N times leveraging shift 1
    while (shiftN > 0)
    {
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
        for (int j = 0; j < SIZE; j++)
        {
            arr[j] = temp[j];
        }
        shiftN--;
    }
    
    printf("\nAfter shift: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

}