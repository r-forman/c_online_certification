
#include <stdio.h>

int main(){

    int num;
    printf("How many * would you like? ");
    scanf("%i", &num);

    printf("Using a \"For\" loop: ");
    for(int i = 0; i < num; i++){
        printf("*");
        //i+=1; or i++ would work (even better!)
    }
    printf("\n");
    printf("Using a \"While\" loop: ");
    while(num > 0){
        printf("*");
        num --;
    }
    printf("\n");
    return 0;
}