// 
#include<stdio.h>
int sum(int);

int main(){
    int n, result;
    printf("Enter value of n : ");
    scanf("%d", &n);
    result = sum(n);
    printf("Addition of first to %d is %d", n, result);
    return 0;
}

int sum(int n)
{
    int result;

    // for( int i = 1; i <= n; i++)
    // {
    //     result = i + result;
    // }
    // return result;

    if(n == 0)
    {
        return 0;
    }
    else{
        result = n + sum(n - 1);
    }
    return result;
}