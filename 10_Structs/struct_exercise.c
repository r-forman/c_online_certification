
#include <stdio.h>

typedef struct point{
    int a;
    int b;
}Point;

void printPoint(Point var)
{
    printf("Point A: %i\n", var.a);
    printf("Point B: %i\n", var.b);
}

Point returnPoint()
{
    Point num2;
    printf("Enter a: ");
    scanf("%i", &num2.a);
    printf("Enter b: ");
    scanf("%i", &num2.b);
    return num2;
}

void main()
{
    Point num1, num2;
    printf("Enter a: ");
    scanf("%i", &num1.a);
    printf("Enter b: ");
    scanf("%i", &num1.b);
    printPoint(num1);
    num2 = returnPoint();
    printPoint(num2);
}