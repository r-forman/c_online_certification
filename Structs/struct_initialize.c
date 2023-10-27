
#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

void main()
{
    // Declaring a "Point variable" (without initialization)
    Point p1;

    // Initializing a "Point" variable (numbers in order)
    Point p2 = { 5, 7 };

    // Using Designated Initializer
    Point p3 = { .x = 3,  .y = 4 };

    // Using Designated Initializer (out of order)
    Point p4 = { .y = 10, .x = 2};

    // Designated Initializer (other members are initialized with 0)
    Point p5 = { .x = 1 };

}