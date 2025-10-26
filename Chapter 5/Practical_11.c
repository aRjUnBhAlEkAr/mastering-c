// Function call
// Function with arguments and with return type.
// Example 2 :  Program to check whether a number is even or odd.

#include<stdio.h>
int evenOdd(int);

int main(){
    int num, flag;
    
    printf("Enter a number : ");
    scanf("%d", &num);

    flag = evenOdd(num);

    if(flag == 1)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }

    return 0;
}

int evenOdd(int num)
{
    if(num%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}