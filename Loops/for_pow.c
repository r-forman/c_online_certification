

#include <stdio.h>

int main(){

    int num, pow, sum = 1;
    printf("Please insert a num: ");
    scanf("%i", &num);
    printf("Pow time: ");
    scanf("%i", &pow);

    for (int i = 1; i <= pow; i++){
        sum *= num;
    }
    printf("Total: %i\n", sum);
    return 0;
}