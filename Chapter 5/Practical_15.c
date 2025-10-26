// // Write a program to find the n'th number term of the Fibonacci series using recursion.

#include<stdio.h>
int fibonacci(int);

int main(){
    int n, result;

    printf("Enter a value of n : ");
    scanf("%d", &n);

    result = fibonacci(n);

    printf("fibonacci of %d is %d", n, result);
    return 0;
}

int fibonacci(int n)
{
    int result;
    
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else{
        result = fibonacci(n-1)+ fibonacci(n - 2);
        //printf("n : %d %d = %d || n : %d  %d = %d\n",n,(n-1), fibonacci(n-1), n, (n-2), fibonacci(n-2));
    }
    return result;
}
