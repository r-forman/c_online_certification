
#include <stdio.h>

int main(){

    char cha;
    printf("Please specify an operator: ");
    scanf("%c",&cha);
    int a, b;
    printf("Please specify 2 numbers:\n");
    scanf("%i",&a);
    scanf("%i",&b);

    int sol;
    switch(cha)
    {
        case '+':
            sol = a + b;
            break;
        case '-':
            sol = a - b;
            break;
        case '*':
            sol = a*b;
            break;
        case '/':
            sol = a/b;
            break;
        case '%':
            sol = a % b;
            break;
        default:
            printf("None selected - exiting\n");
            return(1);
    }

    printf("%i %c %i = %i\n", a, cha, b, sol);
    return(0);

}