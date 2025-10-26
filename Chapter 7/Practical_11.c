// Pointer Addition.

#include<stdio.h>

int main(){
    int num = 35;
    int *ptr;   // pointer to int
    ptr = &num; // stores the address of number variable

    printf("Address of ptr variable is %u\n", ptr);
    // formula : new_address = current_address + number * sizeof(data_type)
    ptr = ptr + 4;  // adding 4 to pointer variable.
    printf("After adding 3 : address of p variable is %u", ptr);
    return 0;
}