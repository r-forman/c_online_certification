
#include <stdio.h>

int main(){
    
    double price, totalPrice=0;

    do {
        printf("Please enter a price: ");
        scanf("%lf", &price);
        totalPrice += price;
    } while (price != 0.0);

    printf("Total price = %f\n", totalPrice);

    return 0;

}