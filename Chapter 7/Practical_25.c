// Constant Pointer.

// Example 1:

#include<stdio.h>

int main(){
    // Defining variable of integer type.
    int a = 10;
    int b = 20;

    // Declaration of constant pointer.
    int *const ptr = &a;    // defining constant pointer.

    // Storing the address of b in ptr
    // ptr = &b;
    printf("value at ptr is %d", *ptr);
    return 0;
}