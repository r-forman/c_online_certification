
#include <stdio.h>
#include <string.h>


// Structs having arrays as data members
typedef struct employee{
    char name[10];
    float age;
    int id;
}Employee;

void main()
{
    Employee emp1;
    Employee emp2 = {"Jake", 24.5, 123};
    
    /*
     Using the "*" to copy "value-by-value" (the members of one struct
     variable to another of the same type)
     Note: Copying static arrays in assignment between two struct variables
     is a little bit different than simply "copying" and array
     element by element 
    */
    emp1 = emp2;
    printf("Employee #1's name is %s\n", emp1.name);
    printf("Employee #2's name is %s\n", emp2.name);

    strcpy(emp1.name, "John");
    emp1.id = 456;
    printf("Employee #1's name is %s\n", emp1.name);
    printf("Employee #2's name is %s\n", emp2.name);
    printf("Employee #1's ID is %i\n", emp1.id);
    printf("Employee #2's ID is %i\n", emp2.id);

}