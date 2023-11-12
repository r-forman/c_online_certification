
#include <stdio.h>

#define SIZE 10
#define ALPHA 26


void main()
{
    char arr[SIZE] = {'a', 'b', 'z', 'd', 'b', 'z', 'f', 'p', 'b', 'r'};
    int count[ALPHA] = {};

    for (int i = 0; i < SIZE; i++)
    {
        // Can use the below printout the see the decimal value and char
        //printf("%%i: %i\t %%c: %c\n", arr[i], arr[i]);
        count[arr[i]-97]++;
    }

    for (int j = 0; j < ALPHA; j++)
        printf(" %c", j + 97);
    printf("\n");
    // Printout cleanly, but might as well grab the highest appearances too
    int index = 0, quant = 0;
    for (int k = 0; k < ALPHA; k++)
    {
        printf(" %i", count[k]);
        // Use ternaries to optimize
        index = (count[k] > quant? k:index);
        quant = (count[k] > quant? count[k]:quant);
    }
    printf("\n");
    printf("%c occurred the most with %i occurrences.\n", index+97, quant);
}