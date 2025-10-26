// Dangling Pointer.

// Example 2 : Function call.

#include<stdio.h>

int *fun()
{
    int a = 10;
    return &a;
}

int main(){
    int *p;
    p = fun();
    printf("value at p is %d", *p);
    return 0;
}