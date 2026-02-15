

#include <stdio.h>
#include <stdlib.h>

int charsConverted(char s1, char s2, char s3)
{
    // '0' --> 48
    // '9' --> 57
    int allInt;
    int hunInt, tensInt, onesInt;
    hunInt = (s1 - '0')*100;
    tensInt = (s2 - '0')*10;
    onesInt = (s3 - '0')*1;
    allInt = hunInt + tensInt + onesInt;
    return allInt;
}

void main(){

    char l1, l2, l3;
    printf("Input 3 number string: \n");
    scanf("%c %c %c",&l1,&l2,&l3);
    int finalInt;
    finalInt = charsConverted(l1, l2, l3);

    printf("Verification: %%c: %c%c%c, %%i: %i\n", l1, l2, l3, finalInt);

    
}