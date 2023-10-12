
// Derivatives!
/* 
    MUST COMPILE WITH -lm
    Including math.h brings in the declaration of the various functions
    and not their definition.
    CLA: gcc ./derivatives.c -o derived -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float derivative(float c, float x, float n)
/* 
    General equation: c*x^n = n*c*x^(n-1)

    What is rate of change & @ x = 2?
    if 2x^3 at x = 1:
        3*2*(1)^(3-1) --> 6*1^2 --> 6
*/
{
    float powerValue = pow(x, n-1);
    return c * n * powerValue;
}


void main() {

int c, x, n;
printf("coeff = ");
scanf("%i", &c);
printf("power of = ");
scanf("%i", &n);
printf("value of x = ");
scanf("%i", &x);
printf("Δ = %.0f\n", derivative(c, x, n));
    

}