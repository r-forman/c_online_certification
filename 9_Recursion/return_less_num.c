
#include <stdio.h>
#define SIZE 10

void returner(int *arr, int *result, int limit, int *end_ptr)
{
   
    // This is an interesting printout!
    // As the pointers are incremented, you
    // can see the non-allocated memory's values
    /* 
    printf("Arr: ");
    for (int k = 0; k < SIZE; k++)
    {
        printf("%i ", arr[k]);
    }
    printf("\nResult: ");
    for (int k = 0; k < SIZE; k++)
    {
        printf("%i ", result[k]);
    }
    printf("\n");
    */

    // If the value the pointer is pointing to is
    // less than the limit (and its not -1), take it
    if (( *arr < limit) && (*arr!=-1))
    {
        *result = *arr;
        // Increment the result array, as they won't
        // increment together
        *result++;
    }
    // Always change the array element
    *arr++;
    // When NOT at the end of the array, do it again
    if (arr <= end_ptr)
        returner(arr, result, limit, end_ptr);
    else
    // When at the end of the array, end it!
        return;
}

void main()
{
    // Source array, end array, and limit
    int arr[SIZE]={0};
    int result[SIZE] = {0};
    int val;
    // Pointers to all these for array copying
    int *arr_ptr = arr;
    int *result_ptr = result;
    // The end is calculated instead
    int *end_ptr;
    end_ptr = &arr_ptr[SIZE-1];

    printf("Please enter a limiting digit:");
    scanf("%i", &val);

    // Grab as many values as requested
    // End if -1 is input, or the array is filled
    int i=0;
    do
    {
        printf("Please enter a digit:");
        scanf("%i", &arr[i]);
        i++;
    } while ((arr[i-1] != -1)&&(i<SIZE));
    
    // Start the recursion
    returner(arr_ptr, result_ptr, val, end_ptr);

    printf("Final array = ");
    for (int l = 0; l < SIZE; l++)
    {
        if (result[l] > 0)
            printf("%i ", result[l]);
    }
    printf("\n");

}