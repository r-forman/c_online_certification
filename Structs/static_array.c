
#include <stdio.h>

typedef struct point {
    int x;
    int y;
}Point;

void main()
{
    // Creating a "Static Array of Points"
    Point pointsArray[5];
    
    // Reading input to the first point element in the array
    printf("Enter a first point 'x' coordinate: ");
    scanf("%i", &pointsArray[0].x);
    printf("Enter a first point 'y' coordinate: ");
    scanf("%i", &pointsArray[0].y);

    // Iterating over all of the Point Array (and reading input into each of them)
    for (int i = 0; i < 5; i++)
    {
        printf("Enter point #%d 'x' coordinate: ", i+1);
        scanf("%i", &pointsArray[i].x);
        printf("Enter point #%d 'y' coordinate: ", i+1);
        scanf("%i", &pointsArray[i].y);
    }
    // Accessing and printing all the values of each of the "Static Array of Points"
    for (int i = 0; i < 5; i++)
    {
        printf("x: %i    ", pointsArray[i].x);
        printf("y: %i\n", pointsArray[i].y);
    }

}