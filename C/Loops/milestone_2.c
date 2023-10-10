
#include <stdio.h>


int main(){

    int money=1, days = 30;

    for (int i=1; i<=days; i++){

        printf("Day %i: $%.2f\n", i, (float)money/100);
        money*=2;

    }
    float dollars = money/100.0;
    printf("Total money = $%.2f\n",dollars);

    return 0;
}