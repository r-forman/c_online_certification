

#include <stdio.h>

int main(){

    printf("Please insert a letter: ");
    char letter;
    scanf("%c", &letter);

    switch(letter)
    {
        case 'A':
            printf("It's an A! oooOOOOOoooo\n");
            break;
    
    default:
        break;
    }


    return 0;
}