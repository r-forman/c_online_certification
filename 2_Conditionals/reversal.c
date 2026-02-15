
#include <stdio.h>

int main(){

    int digit;
    printf("Digit?");
    scanf("%i", &digit);

    int f_digit, s_digit, t_digit;
    f_digit = digit % 10;
    s_digit = (digit/10) % 10;
    t_digit = digit/100;
    int rev = f_digit*100+s_digit*10+t_digit;
    printf("Reversed = %i\n",rev);

    return 0;
}