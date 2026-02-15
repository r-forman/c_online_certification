

#include <stdio.h>

int main(){

    int var;
    printf("Please insert a value: ");
    scanf("%i",&var);

    if (var > 0)
        printf("1\n");
    else if (var < 0)
        printf("-1\n");
    else
        printf("0\n");

    return(0);
}