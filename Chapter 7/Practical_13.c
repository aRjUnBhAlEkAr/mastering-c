// Pointer Substraction.

// Substraction of Two pointers of same data type.

#include<stdio.h>

int main(){
    int num = 10;   // Integer variable.
    int *ptr = &num;    // pointer to variable num.
    int *temp = ptr;    // pointer to variale ptr
    ptr = ptr + 2;  // additing 2 in ptr.

    // pointer2 - pointer1 = (substraction of 2 address)/ size of data type.
    printf("Pointer Substraction : %u - %u = %d", ptr, temp, ptr - temp);

    return 0;
}