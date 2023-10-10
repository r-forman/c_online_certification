
#include <stdio.h>

int main(){

    int num, pow;

    printf("What is the number? ");
    scanf("%i", &num);
    printf("What is the power? ");
    scanf("%i", &pow);

    int prod_while = 1, prod_for = 1;
    for (int i=0; i<pow; i++){
        prod_for = prod_for*num;
    }
    printf("According to \"For\": %i\n", prod_for);
    while (pow >0){
        prod_while = prod_while*num;
        pow--;
    }
    printf("According to \"While\": %i\n", prod_while);

    return 0;
}