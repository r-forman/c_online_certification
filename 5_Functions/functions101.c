/*
    Every function should have:
    1. Name
    2. List of parameters
    3. Function body
    4. Return

*/

#include <stdio.h>
// Signature: Return type, name of function, and params

// Function 1: No parameters and nothing returned
void printGreetings()
{
    printf("Hello!\n");
}
// Function 2: Some parameters and nothing returned
void printMinMax(int num1, int num2)
{
    printf("Second function: \n");
    if (num1 == num2)
        printf("They are equal.\n");
    else{
        printf("Max = %i\n", num1>num2?num1:num2);
        printf("Min = %i\n", num1<num2?num1:num2);
    }

}
// Function 3: No parameters and something returned
int returnSomething()
{
    printf("Third function: \n");
    int n1, n2, n3;
    printf("N1, N2, N2? \n");
    scanf("%i%i%i", &n1, &n2, &n3);
    int max;
    if (n1 > n2)
        //printf("Max = %i", n1>n3?n1:n3);
        //max = (n1>n3?n1:n3);
        return (n1>n3?n1:n3);
    else
        //printf("Max = %i", n2>n3?n2:n3);
        //max = (n2>n3?n2:n3);
        return (n2>n3?n2:n3);
    //return max;
}
// Function 4: Some parameters and something returned
float aveGrade(int g1, int g2, int g3)
{
    float ave = (g1+g2+g3)/3.0;
    return ave;
}

void main(){

    // Function 1
    printGreetings();

    // Function 2
    int number1, number2;
    printf("Num1: ");
    scanf("%i", &number1);
    printf("Num2: ");
    scanf("%i", &number2);
    printMinMax(number1, number2);

    // Function 3
    int max_of_three = returnSomething();
    printf("Max of 3: %i\n", max_of_three);

    // Function 4
    int g1, g2, g3;
    printf("G1, G2, G3?\n");
    scanf("%d%d%d", &g1, &g2, &g3);
    printf("Average grade: %.2f\n", aveGrade(g1, g2, g3));
}