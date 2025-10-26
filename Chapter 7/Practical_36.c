// void pointer.

// Example : Arithmetic Operation.

#include<stdio.h>   // Pre- Processor.

int main(){
    float a[4] = {6.1,10.1,5.5,6.0};    // defining floating array a.

    void *ptr;  // declaration of void pointer.
    ptr = a;    // pointer ptr is pointing to variable a.

    for(int i = 0; i < 4; i++)
    {
        // printf("%f", *ptr);  this line show the error.
        // ptr = ptr + 1;       as we know we cannot perform arithmetic operation on void pointer.
        printf("%f\t", *((float*)ptr+i));
    }
    return 0;
}