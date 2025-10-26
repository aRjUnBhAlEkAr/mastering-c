// Dereference Pointer.

#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = NULL;
    ptr = &a;

    // Before changing the value.
    printf("Address at ptr is %u and value is %d\n", ptr, *ptr);

    *ptr = 20;

    // After changing the value.
    printf("Address at ptr is %u and value is %d", ptr, *ptr);
    return 0;
}