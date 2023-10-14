

#include <stdio.h>

void main(){

int grades[5];
int lowest=10000;

for(int i = 0; i < 5; i++)
{
    printf("Enter grade for %d element: ", i);
    scanf("%i", &grades[i]);
}
for(int j = 0; j < 5; j++)
{
    printf("%i\n", grades[j]);
}
for(int k = 0; k < 5; k++)
{
    lowest = (grades[k]<lowest?grades[k]:lowest);
    printf("%i\n", grades[k]);
    printf("lowest = %i\n", lowest);
}
printf("Lowest value = %i", lowest);

}