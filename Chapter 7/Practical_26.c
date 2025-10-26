// Pointer to Constant.

// Example 1: a

#include<stdio.h>   // Pre-processor

int main(){

    // Defining variable of integer type.
    int a = 10;
    int b = 20;

    // Declaration of Pointer to Constant.
    const int *ptr;
    ptr = &a;   // variable 'a' points to ptr.
    printf("Address at ptr is %u\n", ptr);

    ptr = &b;   // variable 'b' points to ptr.
    printf("Address at ptr is %u", ptr);
    return 0;
}