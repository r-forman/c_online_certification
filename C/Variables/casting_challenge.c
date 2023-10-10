
#include <stdio.h>

int main(){
    int grade1,grade2,grade3;
    printf("Grade 1:");
    scanf("%i",&grade1);
    printf("Grade 2:");
    scanf("%i",&grade2);
    printf("Grade 3:");
    scanf("%i",&grade3);
    double final_grade;
    final_grade = (double)(grade1+grade2+grade3)/3;
    printf("Average grade = %lf\n",final_grade);
    return 0;
}