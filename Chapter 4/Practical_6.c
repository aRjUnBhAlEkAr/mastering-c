// Write a program to print 'n' natural number in reverse order using for loop.
#include<stdio.h>

int main(){
    int n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for (int i = n; i ; i--)
    {
            printf("%d\n", i);
    }
    
    return 0;
}