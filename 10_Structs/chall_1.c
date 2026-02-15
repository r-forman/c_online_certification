

#include <stdio.h>

struct point
{
    int x;
    int y;
};

// This is not a variable, just a template
struct date
{
    int day;
    int month;
    int year;
};


void main()
{
    struct point p1;
    printf("X coordinate: ");
    scanf("%i", &p1.x);
    printf("Y coordinate: ");
    scanf("%i", &p1.y);

    printf("The point is (%i, %i)\n", p1.x, p1.y);

    struct date graduation;
    printf("Day: ");
    scanf("%i", &graduation.day);
    printf("Month: ");
    scanf("%i", &graduation.month);
    printf("Year: ");
    scanf("%i", &graduation.year);
    printf("Graduation will be on %i/%i/%i\n", graduation.month, graduation.day, graduation.year);
}