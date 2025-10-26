// Format 2 of declaration.
// Declaration with Initialization.

#include<stdio.h>

int main(){
    int array[5] = {10,20,30,40,50};    // declaration and intializing of array variable.

    for(int i = 0; i < 5; i++)
    {
        printf("Array of %d is %d\n", i, array[i]);   // priting array using its index.
    }// end of the loop.
}