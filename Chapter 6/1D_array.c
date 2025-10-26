// Array :-
// Declaration array of 5 variable and initialize the variable using index of each array.
// Format 1 of Declaration.
#include<stdio.h>

int main(){
    int array[5];   // declaration of array.
    array[0] = 80;  // initialization of array.
    array[1] = 60;
    array[2] = 70;
    array[3] = 85;
    array[4] = 75;

    //traversal of array
    for(int i = 0; i<5 ; i++)
    {
        printf("array of %d is %d\n", i, array[i]);
    }   // end of the loop.
    return 0;
}