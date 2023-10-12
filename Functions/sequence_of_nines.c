
#include <stdio.h>

void nines()
{
    printf("9");
}

void main(){

    int num;
    printf("Insert how many 9's you'd like: ");
    scanf("%i", &num);
    for (int i = 1; i <= num; i++){
        nines();
    }
    printf("\n");
}