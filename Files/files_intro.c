
#include <stdio.h>
#include <stdlib.h>

/*  Stdio
 *  Standard input - essentially a pointer to keyboard
 *  Standard output - pointer to screen
 *  Standard error - pointer to screen, to write error messages     
 */

void main()
{
    // Step 1: Declare pointer of file-type
    // This is a struct that is dedicated to working with files
    FILE *fp; // Creating a Pointer that points to a File Type (FilePointer)
    // ^ is in stdio header file

    // Step 2: Opening/access to a file
    // fp = fopen(<filename>, <type of operation>);
    /* 
     * Types of operations:
     * w - writing
     * r - reading
     * a - appending. If doesn't exist, file will be created
     */
    fp = fopen("testFile.txt", "w");
    // If different directory: "C:Users/" etc etc

    // Step 3: Make sure the open was successfull
    // Check to see if it failed - check for error codes
    // Null if nothing was returned

    if (fp==NULL) // Could also be 'if (!fp)'
    {
        printf("File not found.\n");
    }
    else
    {
        printf("File has been opened for writing.\n");

        // Step 4: Code here to do some stuff

        // Step 5: After usage, close the stream (close the file)
        fclose(fp);
    }
}