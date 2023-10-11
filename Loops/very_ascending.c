

#include <stdio.h>
#include <stdbool.h>

int main(){

    // Solution 1
    /* 
    int size, input=0, latest=0;
    bool pass = true;
    printf("Size: ");
    scanf("%i", &size);
    for (int i = 0; i < size; i++){
        printf("Next val: ");
        scanf("%i", &input);
        if (input > latest){
            latest = input;
            continue;
        }
        else{
            printf("NOT Very Ascending\n");
            pass = false;
            break;
        }
    }

    if (pass)
        printf("Very Ascending\n");

    return 0;
    */
    int counter = 0, size, input, previous = 0;
    bool pass = true;
    printf("Size: ");
    scanf("%i", &size);
    do
    {
    printf("Val: ");
    scanf("%i", &input);
 
    if (!(input > previous)){
        pass = false;
        break;
    }
    else{
        previous = input;
        counter++;
    }
    } while (counter < size);
    
    if (pass)
        printf("Very Ascending\n");
    else
        printf("Not Very Ascending\n");

    return 0;
 
}