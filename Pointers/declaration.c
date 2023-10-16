
#include <stdio.h>

void main(){

    // data type --> "point" to "int"
    // int *p;

    // * indicates not a "standard variable"
    // Variable is a pointer named p

    // <data-type> *<var name>;

    char *pc;
    // Will point to a character

    //"&" - Address - NOT a pointer

    int a = 5; // Standard declaration of a variable
    int *p;

    p = &a; // P points to the address of a

    // This will print the address
    printf("&a: %p\n", &a);
    printf("p:  %p\n", p);
    
    // Below will print the VALUE that the pointer is pointing to
    printf("a:  %d\n", a);
    printf("*p: %d\n", *p);
}
