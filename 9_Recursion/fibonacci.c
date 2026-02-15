

#include <stdio.h>

int fib(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return fib(num - 1) + fib(num - 2);
}

void main()
{
    int num, result;
    printf("Enter value: ");
    scanf("%i", &num);

    result = fib(num);
    printf("Fibonacci: %i\n", result);

}