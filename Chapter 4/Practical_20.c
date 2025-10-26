// Write a program to find given number is prime or not.

#include<stdio.h>

int main(){
    int i = 0, num = 0, prime = 0;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    for(i = 2; i < num; i++)
    {
        if(num%i == 0 )
        {
            printf("%d\t", i);
            prime = 1;
        }
    }

    if(prime == 0)
    {
        printf("\n%d is prime number.", num);
    }
    else
    {
        printf("\n%d is not a prime number.", num);
    }
    
    return 0;
}