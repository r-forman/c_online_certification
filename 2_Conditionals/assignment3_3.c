

#include <stdio.h>

int main(){

    int var;

    printf("Please insert an integer: ");
    scanf("%i", &var);

    int hun, ten, dig;

    dig = var % 10;
    hun = var / 100;
    ten = (var / 10) % 10;

    if (hun < ten)
        /* if (ten < dig)
            printf("ASCENDING\n");
        else
            printf("NOT ASCENDING\n");
        */
        printf(ten < dig ? "ASCENDING\n" : "NOT ASCENDING\n");
    else
        printf("NOT ASCENDING\n");

    return(0);
}