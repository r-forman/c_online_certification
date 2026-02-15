
#include <stdio.h>

int main(){
    int salary, hours;
    printf("What is the salary per hour?");
    scanf("%i",&salary);
    printf("What is the amount of hours?");
    scanf("%i",&hours);
    int monthly_sal;
    monthly_sal = salary*hours;
    printf("Total salary for this month is: %i\n",monthly_sal);
    return 0;
}