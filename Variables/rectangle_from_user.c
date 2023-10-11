
#include <stdio.h>

int main(){
    float width, height;
    scanf("%f",&width); // Don't forget the &!
    scanf("%f",&height);
    printf("The area of the rectangle is %.1f units^2\n",width*height);
}