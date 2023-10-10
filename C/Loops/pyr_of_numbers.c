
#include <stdio.h>


int main(){

    int num = 0, num_of_spaces = 0;
    printf("Num: ");
    scanf("%i", &num);
    int counter = 1;

    for (int i = 1; i <= num; i++){
        // If its an odd number, should use equal spaces on each side
        num_of_spaces = (num - i);
        // First spaces
        for (int j = 1; j <= num_of_spaces; j++){
            printf(" ");
        }
        // Print numbers
        for (int m = 1; m <= num - num_of_spaces; m++){
            printf("%i ", counter);
            counter++;
        }
        // Final spaces
        for (int k = 1; k < num_of_spaces; k++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}