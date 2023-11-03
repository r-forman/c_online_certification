
#include <stdio.h>

int main(){

    int a = 10,b = 20;
    printf("In a: %i, In b: %i\n", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("In a: %i, In b: %i\n", a, b);

    return 0;

}