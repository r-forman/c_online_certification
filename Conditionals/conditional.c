

#include <stdio.h>

int main(){

    /*
    int grade;
    scanf("%d",&grade);
    if (grade >=60)
        printf("You passed! - ish\n");
    else
        printf("You dumb idiot\n");
    */

    // == : Equals to
    // != : Not equals to

    int eval;
    printf("Your number, sir: ");
    scanf("%i", &eval);

    if ((eval % 2) == 1)
        printf("%i is an odd number\n", eval);
    else
        printf("%i is an even number\n", eval);

    return 0;
}