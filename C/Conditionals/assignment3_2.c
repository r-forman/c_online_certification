
#include <stdio.h>

int main(){

    int val_1, val_2, val_3;
    printf("Please insert the 1st int: ");
    scanf("%i", &val_1);
    printf("Please insert the 2nd int: ");
    scanf("%i", &val_2);
    printf("Please insert the 3rd int: ");
    scanf("%i", &val_3);

    if (val_1 == val_2)
        if (val_1 == val_3)
            printf("EQUAL\n");
        else
            printf("NOT EQUAL\n");
    else
        printf("NOT EQUAL\n");

    return(0);
}