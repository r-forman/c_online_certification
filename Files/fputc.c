

#include <stdio.h>
#include <stdlib.h>

// fputc(<character>, <pointer to a file>)

void main()
{
    FILE* fp;
    char mychar1;

    fp = fopen("charFile.txt", "w");

    if (!fp)
        printf("File not found.\n");
    else
    {
        // Will overwrite the file with below
        fputc('H', fp);
        fputc('i', fp);
        // if "H" -> its interpreted as a string!
        // so would be "H\0"
        fclose(fp);
    }
    // stdout -> pointer to display on screen
    putchar('a');
    // is equivalent to: putc('a', stdout);
    putc('a', stdout);
    
    puts("");
}