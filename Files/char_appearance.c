
#include <stdio.h>
#include <stdlib.h>
#define ALPHA 26

int main()
{
    char letter;
    int counter[ALPHA]={};
    FILE* fp;
    fp = fopen("charfile.txt", "r");

    // To generalize and take a file:
    /*
    char filename[20] = {};
    printf("Enter a filename to read: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    */

    while (!feof(fp))
    {
        letter = fgetc(fp);
        if (letter >= 'a' && letter <= 'z')
            counter[letter-'a']++;
    }

    for (int i = 0; i < ALPHA; i++)
    {
        printf("%c: %i\n", i+'a', counter[i]);
    }

    int index = 0;
    for (int i = 0; i < ALPHA; i++)
    {
        if (counter[i] > counter[index])
        {
            index = i;
        }
    }
    printf("The letter that appeared the most is %c, %i times.\n", index+'a', counter[index]);
}