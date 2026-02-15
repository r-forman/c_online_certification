
#include <stdio.h>
#define SIZE 7

void main()
{
    // Store index of hottest and coldest days of the week
    int hot = 0, cold = 0;
    float ave;
    int week_temps[SIZE];
    //char week_days[3][SIZE] = {'MON', 'TUE', 'WED', 'THR', 'FRI', 'SAT', 'SUN'};
    char week_days[SIZE] = {'M', 'T', 'W', 'R', 'F', 'S', 'N'};
    // SADLY - ARRAY OF 3-LETTER STRINGS DID NOT COMPILE. ARTIFACT OF 2D arrays
    // Will comment out for now until later lessons cover this
    for (int i = 0; i < SIZE; i++)
    {
        printf("What was the temp on %c? ", week_days[i]);
        //printf("What was the temp on %c?", week_days[3][i]);
        //printf("What was the temp? ");
        scanf("%i", &week_temps[i]);
    }
    int sum = 0;
    
    for (int j = 0; j < SIZE; j++)
    {
        // First, add the temp for the ave
        sum += week_temps[j];
        // Then, check for the hottest
        if (week_temps[j] > week_temps[hot])
        {
            hot = j;
            continue;
        }
        // After, check for the coldest
        if (week_temps[j] < week_temps[cold])
        {
            cold = j;
            continue;
        }
    }
    printf("The average temp of the week was %.1f\n", (float)sum/SIZE);
    printf("The coldest day of the week was %c with a temp of %i\n", week_days[cold], week_temps[cold]);
    printf("The hottest day of the week was %c with a temp of %i\n", week_days[hot], week_temps[hot]);
    //printf("The coldest day of the week was %c with a temp of %i\n", week_days[3][cold], week_temps[cold]);
    //printf("The hottest day of the week was %c with a temp of %i\n", week_days[3][hot], week_temps[hot]);
    //printf("The coldest day had a temp of %i\n", week_temps[cold]);
    //printf("The hottest day had a temp of %i\n", week_temps[hot]);
    
}