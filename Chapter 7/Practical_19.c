// Dangling Pointer.

// Example 3: function call using static.

#include<stdio.h>
int *fun()
{
    static int a = 10;
    return &a;
}

int main(){
    int *ptr = fun();
    printf("Value at ptr is %d", *ptr);
    return 0;
}