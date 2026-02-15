

#include <stdio.h>

void main(){

    int mat[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insert number: ");
            scanf("%i", &mat[i][j]);
        }
    }
    printf("The array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5i", mat[i][j]);
        }
        printf("\n");
    }
    printf("The addresses:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Address of [%d][%d] = %ls",i,j,&mat[i][j]);
            printf("\n");
        }
        //printf("\n");
    }

}