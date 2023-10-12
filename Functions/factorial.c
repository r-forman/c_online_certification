
#include <stdio.h>

int factorial(int num)
{
    int sum = 1;
    if (num<0)
        return -1;

    for (int i = num; i > 0; i--)
    {
        sum *= i;
    }
    return sum;

}


void main(){

    int base;
    printf("Base number to be magicked: ");
    scanf("%i", &base);

    printf("Factorial = %i\n", factorial(base));


}