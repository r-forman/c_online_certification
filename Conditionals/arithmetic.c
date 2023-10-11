
#include <stdio.h>

int main(){
    int n_term;
    printf("What is the nth term?");
    scanf("%i", &n_term);
    int slope;
    printf("What is the slope?");
    scanf("%i", &slope);
    int sum = 0;
    int next_term;
    for (int i=1; i<n_term+1;i++){
        next_term = slope*i;
        sum = sum + next_term;
    }
    printf("The sum of the nth term is %i\n",sum);
    return 0;
}