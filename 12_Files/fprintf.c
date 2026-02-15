
#include <stdio.h>
#include <stdlib.h>

// fprintf(<pointer to a file>, <placeholder>, <parameters>)
// fscanf(<pointer to a file>, <placeholder>, <parameters>)

void main()
{
    FILE* fp;
    FILE* fp2;
    fp = fopen("printf.txt", "w");
    fp2 = fopen("scanf.txt", "r");

    int num = 4, num2, num3;

    if (!fp)
        printf("File failed to open.\n");
    else
    {
        // Rather than printing to terminal,
        // it will print to the file

        // This will print both with a space
        fprintf(fp, "%d %d", num, num*num);

        // To print to the console instead
        fprintf(stdout, "%d %d\n", num, num*num);

        // This will grab from a file and put in a variable
        fscanf(fp2, "%d", &num2);
        printf("The value in the file = %i\n", num2);

        // This will grab from the keyboard and put in a variable
        fscanf(stdin, "%d", &num3);
        printf("The value given = %i", num3);

        fclose(fp);
    }
    puts("");
}