#include <stdio.h>

int main(){

    float height, width;
    printf("Please input the height:");
    scanf("%f",&height);
    printf("Please input the width:");
    scanf("%f",&width);

    printf("The perimeter of the rectangle is %f\n",width*2+height*2);
    return 0;
}  