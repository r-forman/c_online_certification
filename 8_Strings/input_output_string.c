
#include <stdio.h>
#define SIZE 5

void main()
{
    // Limitation of input
    // %9s -> first 9 characters of input string
    char name[] = "ChristianBale\n";
    printf("%s", name);
    char given_str[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Insert number %i: ", i);
        scanf("%s", given_str);
    }

    // To optimize and skip the loop:
    char faster_str[SIZE];
    scanf("%5s", faster_str);
    printf("%s\n", faster_str);
    
    // If a phrase with a ' ', scanf will fail
    // Only reads the first word, NO spaces
    char str[20];

    /* DO NOT USE GETS! FORGET IT EXISTS!
    gets("%s", str);
    gets will read text, including stores)
    */

    // Instead of printf, use puts, which also
    // Appends a new line at the end!!!
    puts(faster_str);
    // Printf is better for further formatting strings
}