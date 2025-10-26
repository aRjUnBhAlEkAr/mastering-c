// Return an array.
// Dynamically allocated array.
// Example 1 : Returning array by passing an array which is to be returned as a parameter to the function.

#include<stdio.h>

int *returnArray(int []);   // function declaration.

int main(){
    int *n;
    int array[5];
    n = returnArray(array); //  function call.  passing array as a parameter to the returnArray() function.

    printf("Elements of array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", n[i]);
    }
    return 0;
}

int *returnArray(int array[])   // function definition.
{
    printf("Enter elements in array : \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    return array;
}