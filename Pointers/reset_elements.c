
#include <stdio.h>
#define SIZE 5

void printArray(int *array_ptr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array_ptr[i]);
    }
    printf("\n");
}

void resetArray(int *arr_ptr)
{
    for (int j = 0; j < SIZE; j++)
    {
        arr_ptr[j]=0;
    }
}

void main()
{
    int arr[SIZE] = {1,4,2,8,0};
    int *arr_ptr = arr;

    printArray(arr);
    resetArray(arr);
    printArray(arr);
}