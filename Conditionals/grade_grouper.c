
#include <stdio.h>


int main(){

    char grade;
    printf("Give grade (A-F)");
    scanf("%c", &grade);

    if (grade == "A")
        printf("Its a A");
    else if (grade == "B")
        printf("Its a B");

    switch(grade)
    {
        case 'A': // grade == 'A'
            printf("Grade between 90-100\n");
            break;
        case 'B':
            printf("Grade is between 80-89");
            break;
        default:
            printf("Not recognized");
            break;
    }


    return 0;
}