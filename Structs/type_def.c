
#include <stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
}Date;

//typedef struct Date Date;

void printFate(Date dt)
{
    printf("Graduation will be on %i/%i/%i\n", dt.month, dt.day, dt.year);
}

Date inputDate()
{
    Date dt;
    printf("Enter day(1-31): ");
    scanf("%d", &dt.day);
    return dt;
}

void main()
{
    // To make 2 variables
    int grade1, grade2;
    // To make 1 with several elements
    int grades[5];

    // There is a different way to declare
    int grade_math, grade_physics;
    // Is the same as
    typedef int GRADE;
    GRADE math;
    GRADE physics;
    // Is helpful as it tells you its a grade and of type grade

    /* For structs: */

    // Can make structs cleaner as well
    // Rather than 
    struct Date date2;
    // Can do
    Date date2;
    


}