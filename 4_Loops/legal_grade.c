
#include <stdio.h>

int main(){

    float grade, sumGrade = 0.0, aveGrade = 0.0;
    int counter = 0;

    do {
        printf("Grade: ");
        scanf("%f", &grade);
        counter += 1;
        sumGrade += grade;
        aveGrade= sumGrade/ (float)counter;

    } while (grade != 0.0);
    counter -= 1;
    aveGrade= sumGrade/ (float)counter;

    printf("Average grade = %.2lf\n", aveGrade);

    return 0;
}