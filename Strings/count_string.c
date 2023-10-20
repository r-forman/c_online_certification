
#include <stdio.h>

#define SIZE 20

int countStr(char *string)
{
    int count = 0;
    int j = 0;
    while (string[j] != '\0')
    {
        count++;
        j++;
    }
    return count;
}


void main()
{
    char str_to_count[SIZE];
    printf("Please enter string: ");
    scanf("%s", str_to_count);

    int counter = 0, i = 0;
    while (str_to_count[i] != '\0')
    {
        counter++;
        i++;
    }
    printf("Main: The string is %i elements long\n", counter);

    char *strptr = str_to_count;

    counter = countStr(strptr);
    printf("Point: The string is %i elements long\n", counter);

    counter = countStr(str_to_count);
    printf("Funct: The string is %i elements long\n", counter);


}