// Made by Reed Forman

#include <stdio.h>

int main(){

    float a,b;
    printf("Please insert first nummber: ");
    scanf("%f", &a);
    printf("Please insert second nummber: ");
    scanf("%f", &b);

    if (a > b)
        printf("%.2f is the max, %.2f is the min\n", a, b);
    else if(b > a)
        printf("%.2f is the max, %.2f is the min\n", b, a);
    else
        printf("Thought you were so clever. They're both %.2f\n", a);
    
    // && is and. if (a > 60 && b > 20)
    // || is or.
    // ! is not. if (!(grade > 90))


    return 0;
}