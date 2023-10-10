

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int time;
    printf("Please insert a number: ");
    scanf("%i", &time);

    int hours, min, sec;

    hours = time / 3600;
    min = (time - (hours * 3600))/60;
    sec = time - (hours*3600) - (min*60);
    
    /*
    char hours_c, min_c, sec_c;
    if(hours < 10)
        hours_c = strcat("0", (char)hours);
    else
        hours_c = (char)hours;
    if(min < 10)
        min_c = strcat("0", (char)min);
    else
        min_c = (char)min;
    if(sec < 10)
        sec_c = strcat("0", (char)sec);
    else
        sec_c = (char)sec;

    printf("%c : %c : %c\n", hours_c,min_c,sec_c);
    */
   
    if(hours < 10)
        printf("0");
    printf("%i : ", hours);
    if(min < 10)
        printf("0");
    printf("%i : ", min);
    if(sec < 10)
        printf("0");
    printf("%i\n", sec);

    return(0);
}