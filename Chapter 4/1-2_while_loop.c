/*  While Loop.
    while (condition)
    {
        //code to be executed . 
    }
*/

// Write a program to print table for the given number using while loop.

#include<stdio.h>

int main(){
    int i = 1, num = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);

    while (i<=10)
    {
        printf("%d\n", (num*i));
        i++;
    }

    return 0;
}