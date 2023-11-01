
#include <stdio.h>

union student
{    
    int id; // 4 bytes
    double GPA; // 8 bytes
};

typedef union Student
{
    int id; // 4 bytes
    double GPA; // 8 bytes
} student;

void main()
{
    union student stud1;
    // Shows size of largest attribute (as thats the one allocated for)
    printf("Size of stud1: %ld\n", sizeof(stud1));

    union student *ptrStudent2; // Based on processor! 
    // 8 bytes for 64 bit processor, 4 bytes for 32 bit
    printf("Size of ptr_2: %ld\n", sizeof(ptrStudent2));
    printf("Size of *ptr_2: %ld\n", sizeof(*ptrStudent2));

    stud1.id = 4;
    printf("stud1.id: %i\n", stud1.id);
    ptrStudent2 = &stud1;
    printf("ptr_2: %p\n", ptrStudent2);
    ptrStudent2->id = 10;
    printf("ptr_2: %p\n", ptrStudent2);
    printf("stud1.id: %i\n", stud1.id);

    // Use the type declaration!
    student student3;
    student studentsArray[3]; // Array of unions
    // Just like a normal array, but can assign other params to be element

}