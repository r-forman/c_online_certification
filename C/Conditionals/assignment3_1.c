

#include <stdio.h>

int main(){

    int val_1,val_2;
    printf("Please insert int 1:");
    scanf("%i",&val_1);
    printf("Please insert int 2:");
    scanf("%i",&val_2);

    if (val_1 == val_2)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");

    return 0;
}