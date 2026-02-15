

#include <stdio.h>


void main()
{
    const int year = 2000;
    const float salary = 31.35;

    // Any attempt to change the value will lead
    // to a compilation error

    // Default usage of constants in C
    const age = 35; // Assumes its an int!

    // A pointer to a constant
    // Value it's pointing to can't be changed,
    // but the pointer itself CAN BE
    const int *ptr;

    // Creating constant pointer that points to var age
    int *const ptr2 = &age;

    *ptr2 = 30;
    // Modify the value of "age" where we point to,
    // and not the actual pointer

    // This is an attempt to change the pointer itself
/*    ptr = &age;       */
    // It will result in a compilation error

    const int *const ptr3;
    // Constant pointer to constant integer
    // Neither can be changed - both are constants!
    
}