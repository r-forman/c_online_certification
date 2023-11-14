
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE* filePtr;
    filePtr = fopen("charFile.txt", "r");

    if (!filePtr)
    {
        printf("File failed to open.\n");
    }
    else
    {
        // fgetc(<pointer to a file>)
        // fgetc -> file get character
        printf("File is open for reading.\n");
        char char1;
        char1 = fgetc(filePtr);
        printf("%c", char1);
        char char2;
        char2 = fgetc(filePtr);
        printf("%c", char2);
        puts("");

        // Remember, stdin is a pointer to the keyboard
        // Here, it will wait for a char from the keyboard
        fgetc(stdin);
        
        puts("");
        fclose(filePtr);
    }
    
}
