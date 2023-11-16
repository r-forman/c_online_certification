
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    fp = fopen("charCounter.txt", "r");

    if (!fp)
    {
        printf("File not found.\n");
        return 1;
    }
    else
    {
        char c;
        int row_counter = 0;
        // could be while ((c = fgetc(fp)) != EOF)
        while(!feof(fp)) 
        {
            c = fgetc(fp);
            printf("%c", c);
            if (c == '\n')
                row_counter++;
        }
        printf("There are %i rows.", row_counter);
        fclose(fp);
    }
    puts("");

}