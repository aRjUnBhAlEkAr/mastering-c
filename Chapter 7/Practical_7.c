// Increment Pointer.

#include<stdio.h>

int main(){
    int num = 25;   // integer variable declaration
    int *p = &num;  // p is a pointer to variable num.

    printf("Before increment :Address of p variable is %u\n", p);
    p++;     // address of Pointer variable + 1 * sizeof(data_type of pointer_var)
    printf("After increment : Address of p variable is %u", p); // p will get incremented by 4.
    return 0;
}  