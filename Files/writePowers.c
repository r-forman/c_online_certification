
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100


int main()
{

    FILE* fp;
    fp = fopen("powers.txt", "w");

    if (!fp)
    {
        printf("File not found.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            /* To write 1 character at a time
            fputc(arr[i], fp);
            fputc(' ', fp);
            */
            fprintf(fp,"%i %i\n", (i+1), (i+1)*(i+1));
        }
        fclose(fp);
    }

    fp = fopen("powers.txt", "r");
    if (!fp)
    {
        printf("File not found.\n");
        return 1;
    }
    else
    {
        char stringer[10];
        // To just print to the terminal
        while (fgets(stringer, 10, fp))
        {
            printf("%s", stringer);
        }
        // To store as variables - why doesn't this work?
        int num1, num2;
        printf("Starter: %i %i\n", num1, num2);
        for (int i = 0; i < 10; i++)
        {
            fscanf(fp, "%d%d", &num1, &num2);
            printf("Read: %i %i\n", num1, num2);
        }

        fclose(fp);    
    }
    puts("");
}