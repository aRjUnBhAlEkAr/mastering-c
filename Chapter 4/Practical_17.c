// Write a program to sum of first ten natural numbers using while loop.

#include<stdio.h>

int main(){
    int i = 1, sum = 0; //intializing local variables.
    while(i <= 10)
    {
        sum = sum + i;  // or sum += 1; --> adding the number in 'sum' variable.
        i++;
    }
    printf("Sum of first ten number : %d", sum);
    return 0;
}