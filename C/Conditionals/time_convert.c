

#include <stdio.h>

int main(){

    int seconds;
    printf("How many seconds to convert?");
    scanf("%i",&seconds);
    int hours, minutes;
    hours = seconds/3600;
    seconds = seconds % 3600;
    minutes = seconds/60;
    seconds = seconds % 60;
    printf("%i hours, %i minutes, %i seconds remaining.\n",hours,minutes,seconds);

    // If you wanted to take the remainder of a float
    // x = 1.6
    // x - (int)x would give 1.6-1=0.6
    float x = 4.9;
    printf("x = %d\n", (int)x);

    return 0;
}
