
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
        int counter = 0, row_counter = 0;
        // could be while ((c = fgetc(fp)) != EOF)
        while(!feof(fp)) 
        {
            c = fgetc(fp);
            counter++;
            // printf("%c %i\n", c, counter);
            printf("%c", c);
        }
        printf("There are %i characters total.", counter);
        fclose(fp);
    }
    puts("");

}