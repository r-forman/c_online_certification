// Structure allows for templating of a variable
// of a specific type

/*
struct <structure-name>
{
    // data 
};
*/

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};
struct address{
    char state[20];
    char city[10];
    int number;

};

void main()
{
    // Similar to objects
    struct date mydate1, mydate2;

    // To access field
    mydate1.day = 10;
    mydate1.month = 25;
    mydate1.year = 2023;

    printf("%d\n", mydate1.year);
}