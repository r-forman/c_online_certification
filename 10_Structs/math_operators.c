// Structs - Mathematical Operators

// Usage of "Relational Operators" (<,>,<=,>=,!=,==)

#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

Point addition(Point point1, Point point2)
{
    point1.x += point2.x;
    point1.y += point2.y;
    return point1;
}
void increment(Point* p)
{
    (*p).x++;
    (*p).y++;
}

int main()
{
    Point p1 = {1,2}, p2 = {4,1};
    // p1++; This will not work! What parameter do you increment?
    printf("p1.x: %i\n", p1.x);
    printf("p1.y: %i\n", p1.y);
    p1 = addition(p1,p2);
    printf("p1.x: %i\n", p1.x);
    printf("p1.y: %i\n", p1.y);
    increment(&p1);
    printf("p1.x: %i\n", p1.x);
    printf("p1.y: %i\n", p1.y);
}