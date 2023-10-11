
#include <stdio.h>

int main(){

    // For Loop
    int num, pow;
    printf("Please enter a number: ");
    scanf("%i", &num);
    printf("Please enter a power: ");
    scanf("%i", &pow);
    
    int sum = 1;
    for (int i = 0; i < pow; i++){
        sum = sum * num;
    }

    printf("Sum = %i\n", sum);

    return 0;
}