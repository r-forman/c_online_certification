
#include <stdio.h>
#define SIZE 6


int charCount(char *arr, char match, int i)
{
    if (arr[i] == match)
        return 1;
    else
        return 0;
}

void main()
{
    char c;
    char arr[SIZE];
    char *char_ptr = arr;
    printf("Please enter char to look for:");
    scanf(" %c", &c);
    int i = 0;
    printf("Please enter char elements:\n");
    do
    {
        scanf(" %c", &arr[i]);
        i++;
    } while (arr[i-1]!='$' && i < SIZE);

    int count = 0;
    for (int j = 0; j < SIZE; j++)
    {
        if (charCount(arr, c, j) == 1)
            count++;
    }
    printf("There were %d cases of %c\n", count, c);
}

