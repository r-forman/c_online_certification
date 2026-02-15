
#include <stdio.h>

// Develop a rational number struct
typedef struct ratio{
    int numer;
    int denom;
} Ratio;

void printer(Ratio p)
{
    printf("\t\tNumerator: %i\tDenominator: %i\n", p.numer, p.denom);
}

void increment(Ratio* p1)
{
    (*p1).numer++;
    (*p1).denom++;
}
void decrement(Ratio* p1)
{
    (*p1).numer--;
    (*p1).denom--;
}
Ratio subtract(Ratio n1, Ratio n2)
{
    n1.numer -= n2.numer;
    n1.denom -= n2.denom;
    return n1;
}
Ratio addition(Ratio n1, Ratio n2)
{
    n1.numer += n2.numer;
    n1.denom += n2.denom;
    return n1;
}
Ratio multiplication(Ratio n1, Ratio n2)
{
    n1.numer *= n2.numer;
    n1.denom *= n2.denom;
    return n1;
}
Ratio division(Ratio n1, Ratio n2)
{
    printf("numers: %i / %i = ", n1.numer, n2.numer);
    n1.numer /= n2.numer;
    printf("%i\n", n1.numer);
    printf("denoms: %i / %i = ", n1.denom, n2.denom);
    n1.denom /= n2.denom;
    printf("%i\n", n1.denom);
    return n1;
}
int bigger(Ratio n1, Ratio n2)
{
    if (n1.numer > n2.numer && n1.denom > n2.denom)
        return 0;
    else
        return 1;
}
int smaller(Ratio n1, Ratio n2)
{
    if (n1.numer < n2.numer && n1.denom < n2.denom)
        return 0;
    else
        return 1;
}
int equal(Ratio n1, Ratio n2)
{
    // Multiply by denominators so have common base
    n1.numer = n1.numer * n2.denom;
    n2.numer = n2.numer * n1.denom;
    n1.denom = n1.denom * n2.denom;
    n2.denom = n1.denom * n2.denom;
    if (n1.numer == n2.numer)
        return 0;
    return 1;
}
int unequal(Ratio n1, Ratio n2)
{
    n1.numer = n1.numer * n2.denom;
    n2.numer = n2.numer * n1.denom;
    n1.denom = n1.denom * n2.denom;
    n2.denom = n1.denom * n2.denom;
    if (n1.numer != n2.numer)
        return 0;
    return 1;
}

void main()
{
    // Get the first rational number for the initial operations
    Ratio num;
    printf("Numerator and denominator: \n");
    scanf(" %i %i", &num.numer, &num.denom);
    printf("Original");
    printer(num);

    increment(&num);
    printf("Increment (++)");
    printer(num);

    decrement(&num);
    printf("Decrement (--)");
    printer(num);

    // Get another rational number for further operations
    Ratio num2;
    printf("Second numerator and denominator: \n");
    scanf(" %i %i", &num2.numer, &num2.denom);
    num = subtract(num, num2);
    printf("Subtraction");
    printer(num);
    num = addition(num, num2);
    printf("Addition");
    printer(num);

    // Multiply and divide the rationals
    num = multiplication(num, num2);
    printf("Multiplication");
    printer(num);
    num = division(num, num2);
    printf("Division");
    printer(num);

    // Compare if all values are bigger
    if (bigger(num, num2) == 0)
        printf("n1 is bigger than n2\n");
    else
        printf("n1 is NOT bigger than n2\n");
    // Compare if all values are bigger or smaller
    if (smaller(num, num2) == 0)
        printf("n1 is smaller than n2\n");
    else
        printf("n1 is NOT smaller than n2\n");

    // Compare if the values are equal
    if (equal(num, num2)==0)
        printf("n1 is equal to n2\n");
    else
        printf("n1 is NOT equal to n2\n");
    // Compare if the values are unequal
    if (unequal(num, num2)==0)
        printf("n1 is unequal to n2\n");
    else
        printf("n1 is NOT unequal (aka equal) to n2\n");

}