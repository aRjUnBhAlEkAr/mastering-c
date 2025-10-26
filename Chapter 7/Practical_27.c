// Pointer to constant.

// Example 2:

#include<stdio.h>   // Pre-processor

int main(){
    // Defining variable type of integer.
    int a = 10;

    // defining Pointer to Constant.
    const int *ptr;

    ptr = &a;   // variable 'a' is points to ptr.

    // changing the value at the address at ptr variable.
    //*ptr = 30;    // this line will show error.
    return 0;
}