#include<stdio.h>

int main(){
    int n = 50;
    int *ptr;
    ptr = &n;

    printf("Address of variable n is %x\n", &n);    // prints the address of n variable.
    printf("Address of Pointer ptr variable is %x\n", &ptr);    // prints the address of Pointer variable.

    printf("Value of variable n is %d\n", n);   // prints the value at the variable n.
    printf("Address of pointer to n is %x\n", ptr); //it prints address of Pointer to n variable.
    printf("value at pointer to n is %d", *ptr);    // it prints the value at address of the pointer variable.

    return 0;
}