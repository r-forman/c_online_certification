
#include <stdio.h>
#define SIZE 10

void main(){

    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arrcop[SIZE] = {};

    int *arr_ptr = arr;
    int *copy_ptr = arrcop;
    
    int *end_ptr;
    
    // Pointer to last element of array
    end_ptr = &arr_ptr[SIZE - 1];

    printf("Arr prior: ");
    for (int i = 0; i < SIZE; i++)
        printf("%i ", arr[i]);

    while (arr_ptr <= end_ptr)
    {
        *copy_ptr = *arr_ptr;
        arr_ptr++;
        copy_ptr++;
    }

    printf("Arr after: ");
    for (int i = 0; i < SIZE; i++)
        printf("%i ", arrcop[i]);
    printf("\n");

}
