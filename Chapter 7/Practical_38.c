// Dereferencing Pointer.

#include<stdio.h>   // Pre-Processor.

int main(){
    int a = 10; // defining variable a.
    int *ptr;   // declaration of pointer variable.
    ptr = &a;   // initializing pointer variable.
    *ptr = 8;   // changing value using dereferencing operator.
    printf("value of a is %d", a);
    return 0;
}