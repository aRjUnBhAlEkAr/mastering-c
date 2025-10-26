// Constant Pointer to a Pointer.

// Example 2 :

#include<stdio.h>   // pre-processor.

int main(){
    int a = 10;     //defining variable a.
    int b = 20;     //defining variable b.

    const int *const ptr = &a;  // defining Constant Pointer to a Pointer variable 
    // *ptr = 200;
    // ptr = &b;
    printf("Address at ptr : %d\nValue at Address : %d", ptr, *ptr);
    return 0;
}