
#include <stdio.h>

int main(){

    int a,b;
    printf("Please insert 2 numbers to compare:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    (a>b)?printf("%i is bigger!\n",a):printf("%i is bigger!\n",b);


    return(0);

}