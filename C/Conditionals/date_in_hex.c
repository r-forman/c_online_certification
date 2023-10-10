

#include <stdio.h>

int main(){

    int year, month, day;
    printf("Please insert a year: ");
    scanf("%i", &year);
    printf("Please insert a month: ");
    scanf("%i", &month);
    printf("Please insert a day: ");
    scanf("%i", &day);

    printf("Day = 0x%X\n", day);
    printf("Month = 0x%X\n", month);
    printf("Year = 0x%X\n", year);

    return 0;
}