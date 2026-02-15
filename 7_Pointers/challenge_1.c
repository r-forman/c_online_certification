

#include <stdio.h>

void main(){

    int grade1, grade2;
    int *p1, *p2;
    p1 = &grade1;
    p2 = &grade2;

    // First print the value
    printf("grade1 = %i\n", *p1);
    printf("grade2 = %i\n", *p2);

    // Then print the address
    printf("&grade1 = %p\n", p1);
    printf("&grade2 = %p\n", p2);

}