
#include <stdio.h>

int main(){
    int num1=5, num2=2;
    double result;
    result = num1/num2; // int/int will give an int!
    printf("result = %lf \n",result);
    double num3 = 5.0;
    int num4 = 2;
    result = num3/num4; // double/int will give a double!
    printf("result = %lf \n",result);

    // Now for casting
    int num5=5, num6=2;
    double resultnew;
    resultnew = (double)num5/num6; // (double) will cast a integer as a double
    printf("result = %lf \n",resultnew);

    // (int)5.1 will just give 5

}