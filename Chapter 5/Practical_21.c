// Memory allocation of Recursive method.
#include<stdio.h>
int sum(int);

int main(){
    int num = 5;
    printf("Sum : %d", sum(num));
    return 0;
}

int sum(int n)
{
    int result;
    if(n == 0)
    {
        return 0;
    }
    else{
        printf("value of n : %d\n", n);
        result =  n + sum(n-1);
        printf("after  recursive call : %d\n", result);
        return result;
        //return n + sum(n - 1);//    4,3,2,1
    }
}