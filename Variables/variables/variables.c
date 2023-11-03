
#include <stdio.h>

int main(){

    // Variable declaration:
    // <type> <name>;
    int age;
    age = 30;
    double temp;
    temp = 26.5;
    
    float grade1;
    float grade2;
    scanf("%f",&grade1); // User input from terminal
    scanf("%f",&grade2);
    // & Indicates value should be put in the ADDRESS where grade 1 sits
    printf("The average grade is %.1f\n",(grade1+grade2)/2);
}