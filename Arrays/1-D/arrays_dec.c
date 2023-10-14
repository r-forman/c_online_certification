

#include <stdio.h>

void main()
{

    // Size of the array must be constant
    int grades[5];
    /* Why?     Per online resource:
    It is a drawback of the C programming lanugage.
    The sizes of statistically-bounded arrays need
    to be constant expressions. 
    Even constant and constant-qualified variables are
    not a constant expression that can be used to
    define an array's initilal size.
    */
    /* Note:
        There is a way to allocate dynamically at runtime!
        Will not be covered in this course, sadly. Higher level.
    */

    // Array of ints
    int arr[3] = {5,7,10};

    // Array of Float-Points
    float bArr[3] = {1.2,5.3,2.6};

    // Arrays of Chars
    char name[4] = {'R','E','E','D'};

    // Counter Arrays
    int carr[5]={0}; // Will be 5 0's
    for(int i = 0; i < 5; i++)
        printf("%i", carr[i]);
    printf("\n");
    int arrg[5] = {1,2}; // Will be 1,2,0,0,0
    for(int i = 0; i < 5; i++)
        printf("%i", arrg[i]);
    printf("\n");

    // Don't need to specify array size
    int testArray[] = {1,5,4,6,7,};


    

    
}