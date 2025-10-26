// Declaration of Pointer .

#include<stdio.h>   // Pre Processor

int main(){
    int n = 10;     // integer variable.
    int *ptr = &n; 
    int *ptr1 = ptr;

    printf("Address of ptr variable is %x\n", ptr); // variable ptr of type pointer is pointing to the address of the variable n of the type integer.
    printf("Value of ptr variable is %d\n", *ptr);

    return 0;
}