
#include <stdio.h>
#include <math.h>

int main(){

    int year;
    printf("Please insert a year: ");
    scanf("%i", &year);

    if (year%4==0)
        if ((year%100==0)&&(year%400==0))
            printf("Leap year\n");
        else if (year%100==0)
            printf("Not a leap year\n");
        else
            printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return(0);
}