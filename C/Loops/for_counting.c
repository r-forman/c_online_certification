
#include <stdio.h>


int main(){

    int num;
    printf("Num: ");
    scanf("%i", &num);

    printf("i: ");
    for (int i = 1; i <= num; i++){

        printf("%i", i);

    }
    printf("\n");
    
    printf("j: ");
    for (int j = num; j > 0; j--){

        printf("%i", j);

    }
    printf("\n");


    int sum = 0;
    for (int k = 0; k <= num; k++){
        sum+=k;
    }
    printf("Sum: %i\nEvens: ", sum);

    int counter = 0, val = 0;
    
    for (int l = 1; counter < num; l++){
        val = l % 2;
        
        if (val < 1){
            counter++;
            printf("%i", l);
        }
    }
    printf("\n");

    return 0;
}