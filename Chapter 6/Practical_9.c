// Return an Array.

// Passing 1D array as a argument to a function.
#include<stdio.h>   // Pre Processer

void getArray(int array[]); // function declaration

int main(){ // main function begins
    int array[5] = {10,20,30,40,50};    // declaringn and defining Array

    getArray(array);    // function call.
    return 0;
}

void getArray(int array[])  // function definition.
{
    printf("Element of array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
}