
#include <stdio.h>

int main(){

    float a = 5.0, b = 3.0;
    printf("a = %.1f, b = %.1f\n", a, b);
    float temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %.1f, b = %.1f\n", a, b);

    return 0;
}