// Pointer Substraction.

#include<stdio.h>

int main(){
    int num = 10;   // integer variable declaration
    int *ptr;   // Pointer to integer
    ptr = &num; // stores address of num variable

    printf("Before substraction : address of ptr is %u\n", ptr);
    ptr = ptr - 2;  // new_address = current_address - 2 * sizeof(data_type)
    printf("After substraction  : address of ptr is %u", ptr);
    return 0;
}