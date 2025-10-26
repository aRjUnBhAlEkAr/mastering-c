// Dangling Pointer.

// Example 1: Variable goes out of scope.

#include<stdio.h>

int main(){
    char *p;
    {
        char a = 'A';
        p = &a;
    }
    printf("value at p is %c", p);
    return 0;
}