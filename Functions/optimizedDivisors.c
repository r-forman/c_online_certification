
#include <stdio.h>
#include <stdlib.h>


int optimized(int num)
{
    int i;
    int sum = 1;
    if (num == 1)
        return 1;
    for(i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        sum = sum + i + num/i;
    }
    if (i*i == num)
        sum += i;
    return sum + num;
}

void main(){
    int n;
    printf("Num to find divisors of: ");
    scanf("%i", &n);
    printf("%i\n",optimized(n));
}