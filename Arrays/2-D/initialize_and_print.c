

#include <stdio.h>

void main(){

    int array2D[2][3] = {{1,5,9},{2,6,10}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", array2D[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}