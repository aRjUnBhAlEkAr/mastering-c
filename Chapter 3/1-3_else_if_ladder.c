// if else ladder.
// Write a Program to check the given number is less 10,20,30 and 40 using else if ladder.

#include<stdio.h>

int main(){
    int num;

    printf("Enter any Number : ");
    scanf("%d",&num);

    if (num <= 10)
    {
        printf("Entered number is less than 10");
    }
    else if (num <= 20)
    {
        printf("Entered number is less than 20");
    }
    else if (num <= 30)
    {
        printf("Entered number is less than 30");
    }
    else if (num <= 40)
    {
        printf("Entered number is less than 40");
    }
    else
    {
        printf("Entered number is Greater than 40");
    }

    return 0;
}