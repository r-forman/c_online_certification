
#include <stdio.h>

int main(){
    int digits;
    printf("What is the number?");
    scanf("%i",&digits);
    int first_digits, sec_digit, thir_digit;
    first_digits = digits/100;
    printf("first_digits: %i\n", first_digits);
    sec_digit =(digits - first_digits*100)/10;
    printf("sec_digit: %i\n", sec_digit);
    thir_digit = (digits - first_digits*100 - sec_digit*10);
    printf("thir_digit: %i\n", thir_digit);
    printf("Total sum of digits = %i\n", first_digits+sec_digit+thir_digit);

    // Better way, from professor
    int num;
    int units, tens, hundreds;
    printf("What is the number?");
    scanf("%i",&num);
    units = num % 10; // If 531, will be 53.1 -> give 1
    hundreds = num / 100; // If 531, will be 5.31 -> give 5
    tens = (num / 10) % 10; // If 531, num/10 = 53 as int, then %10 =5.3-> 3
    printf("Total sum of digits = %i\n", units+hundreds+tens);


    return 0;
}