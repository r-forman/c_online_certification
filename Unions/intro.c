
#include <stdio.h>
#include <string.h>

// What is a Union? 
// 1. A user-defined datatype
// 2. A collection of elements (or variables) that are kind
//    of being held in the same region of memory

// How to define:
/*
union intro
{
    // data
};
*/

union info{
    char firstname[20];
    int age;
};

union minmax
{
    int min;
    int max;
    double average;
};

void main()
{
    // Template - for creating a union
    //union <union_name> <variable_name>;
    union info myvar1;

    // Different from struct! Separate piece of memory for each field
    // In union, one piece of memory for all fields

    struct point_struct
    {
        int x;
        int y;
    };

    union point_union
    {
        int x;
        int y;
    };

    myvar1.age = 26;
    printf("myvar1.age: %i\n", myvar1.age);

    strcpy(myvar1.firstname, "Hello!");
    printf("myvar1.age: %i\n", myvar1.age); // Now different!
    printf("myvar1.firstname: %s\n", myvar1.firstname);

    struct point_struct point1;
    union point_union point2;

    point1.x = 5;
    point1.y = 7;
    printf("Struct = (%d,%d)\n", point1.x, point1.y);
    point1.y = 4;
    printf("\tAfter: Struct = (%d,%d)\n", point1.x, point1.y);

    point2.x = 3; // Only one is going into the allocated memory!
    printf("Union = (%d,%d)\n", point2.x, point2.y);
    point2.y = 4;
    printf("\tAfter: Union = (%d,%d)\n", point2.x, point2.y);
}