
// <string.h> library!

/*
Functionality:
    1. Finding the length of a string
        strlen
    2. Copying content
        strcpy
    3. Concatenating
        strcat
    4. Comparing
        strcmp
*/

#include <stdio.h>
#include <string.h>

void main()
{
    // strlen returns number of characters 
    // until the first \0 char
    char food[5] = "rice";
    printf("name length: %ld \n", strlen(food));

    // strcpy copies one array into another
    char str2[5];
    // Address of destination string, then source
    // Have to make sure there is enough memory 
    // in destination string
    strcpy(str2, food);
    puts(str2);

    // strcat concats one string to end of the other
    char strDest[20] = "Hello ";
    char sourceStr[] = "World!";
    strcat(strDest, sourceStr);
    puts(strDest);

    // strcmp compares the string alphabetically

    //strcmp("May", "Mike") --> -1
    char str1[] = "May", str2p[] = "Mike";
    strcmp(str1, str2); // -- > -1
    strcmp(str2, str1); // -- > +1
    strcmp(str1, str1); // -- > 0


}