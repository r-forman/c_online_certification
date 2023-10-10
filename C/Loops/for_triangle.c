
#include <stdio.h>
#include <string.h>

int main(){

    int num;
    printf("Num: ");
    scanf("%i", &num);

    for (int i = 1; i<=num; i++){
        for (int j = 1; j <= i; j++){
            printf("%i", j);
        }
        printf("\n");
    }
    // Break and Continue
    /*
    Break will exit the loop entirely
    Continue will move to the next iteration of the loop
    */

    return 0;
}