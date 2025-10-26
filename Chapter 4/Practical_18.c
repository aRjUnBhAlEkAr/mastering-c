// Write a program to calculate the sum of the numbers ocuring in the multiplication table of 8.

#include<stdio.h>

int main(){
    int sum = 0;    // initializing local variable.
    for(int i = 1; i <= 10; i++)
    {
        sum = sum + (8 * i);    // or sum += (8 * i) --> stores all numbers in the table of 8 in 'sum' variable.
    }
    printf("Sum of numbers in table of 8 : %d", sum);
    return 0;
}