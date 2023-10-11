

#include <stdio.h>

int main(){
    int inc=0;
    float grade, ave=0;
    
    while(grade>-1){
        ave+=grade;
        printf("Ave = %f\n", ave/(float)inc);
        inc++;
        printf("New grade: ");
        scanf("%f", &grade);
    }
    printf("The average grade for %i courses = %f\n", inc, ave/((float)inc-1.0));

    return 0;
}