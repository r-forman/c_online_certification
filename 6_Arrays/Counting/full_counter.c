
#include <stdio.h>

#define SIZE 10
#define ALPHA 27


void main()
{
    char arr[SIZE] = {'a', 'b', 'z', ' ', 'b', 'Z', 'f', 'F', 'b', 'r'};
    int count[ALPHA] = {};
    const SPCE = 27;

    for (int i = 0; i < SIZE; i++)
    {
        // Lowercase are 97 - 122
        if (arr[i] >= 'a')
            count[arr[i]-'a']++;
        // Uppercase are 65 - 90
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
            count[arr[i]-'A']++;
        // Space is 32. Make this the last element
        else if (arr[i] == ' ')
            count[SPCE]++;
    }

    for (int j = 0; j < ALPHA; j++)
        printf(" %c", j < 26? j + 65: ' ');
        //printf(" %c", j + 65);
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
    printf("%c occurred the most with %i occurrences.\n", index+65, quant);
}