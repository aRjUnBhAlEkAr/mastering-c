// Dereferencing Pointer.

#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = NULL;
    ptr = &a;
    printf("Address at the ptr is %d and value is %d", ptr, *ptr);
    return 0;
}