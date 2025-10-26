// Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int factorial = 1, num = 1; // initializing local variables.

    printf("Enter a number : ");
    scanf("%d", &num);  // input from user.

    for(int i = 1; i <= num; i++)
    {
        factorial = factorial * i;  // factorial is multiplication of each number from 1 to last number. --> 3 = 3 * 2 * 1 
    }
    printf("Factorial of %d is %d.", num, factorial);
    return 0;
}