// Structs - Operators and Relations

// Usage of "Relational Operators" (<,>,<=,>=,!=,==)

#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

typedef struct employee {
    char name[10];
    float age;
    int id;
} Employee;

int equalPoint(Point p1, Point p2)
{
    if(p1.x == p2.x && p1.y == p2.y)
        return 1;
    else
        return 0; 
}

int unequalPoint(Point p1, Point p2)
{
    if(p1.x != p2.x || p1.y != p2.y)
        return 1;
    else
        return 0; 
}

void main()
{
    Point p1 = {3,5}, p2 = {2,6};
    // Error #1 - what fields is used to decide the result?
    /* This does not work, as what is it comparing? Multiple fields!
    if (p1 > p2)
    {
    }
    */
    if (equalPoint(p1, p2)!=0)
        printf("Equal!\n");
    if (unequalPoint(p1, p2)!=0)
        printf("Unequal!\n");

    
}