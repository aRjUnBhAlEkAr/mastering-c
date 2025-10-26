// Dereference Pointer.

#include<stdio.h>

int main(){
    int x = 10;
    int y;
    int *ptr;

    ptr = &x;
    y = *ptr;
    *ptr = 20;

    printf("value at x is %d\n", x);
    printf("value at y is %d", y);
    return 0;
}