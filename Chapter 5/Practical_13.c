// Call by reference.
// Write a program to swapping the values of the two variables.

#include<stdio.h>   // preprocessor
void swap(int *, int *);    // function prototype or function declaration

int main(){
    int num1 = 100, num2 = 200; // initializing variables.
    printf("Before the function call values in main num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2); // function call.
    printf("After the function call values in main num1 = %d, num2 = %d", num1, num2);
    return 0;
}

void swap(int *a, int *b)   //function defining.
{
    int temp = 0;
    printf("Before Swapping the values in the function a = %d, b = %d\n", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping the values in the function  a = %d, b = %d\n", *a, *b); 
}