//if statement.
// Write a program to determine given number is Even.
#include<stdio.h>

int main(){
    int num;
    printf("Enter any Number :");
    scanf("%d",&num);

    //Checking Condition using 'if statement'
    if (num%2==0)
    {
        printf("%d is even.",num);
    }
    
    return 0;
}