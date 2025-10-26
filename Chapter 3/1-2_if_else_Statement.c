// if else statement
// Write a program to determine given number is Even or Odd.

#include<stdio.h>

int main(){
    int num;

    printf("Enter any Number : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd ",num);
    }
    
    return 0;
}