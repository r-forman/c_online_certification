
#include <stdio.h>
#include <stdlib.h>

// fputs(<string>, <pointer to a file>)
// fgets(<string>, <int/length limit>, <pointer to a file>)

void main()
{
    FILE* fp;
    fp = fopen("string.txt", "w");

    if (!fp)
        printf("File failed to open.\n");
    else
    {
        // This will put a string into the file
        // Does not add a \n by default like puts
        fputs("Hello", fp);
        fputs(" World!", fp);
        fclose(fp);   
    }

    fp = fopen("string.txt", "r");

    if (!fp)
        printf("File failed to open.\n");
    else
    {
        char myString[10];
        int count = 0;
        // Last char will be a \0
        // This will get a string of 10 characters
        while (fgets(myString, 10, fp))
        {
            printf("string #%d read: %s\n", ++count, myString);
        }
        // fgets will read until the \n and then adds a \0 to the end
        fclose(fp);
    }

    puts("");
}