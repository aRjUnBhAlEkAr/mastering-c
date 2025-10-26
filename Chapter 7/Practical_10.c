// Decrement Pointer.
 
#include<stdio.h>

int main(){
    int num = 50;
    int *p = &num;

    printf("Before Decrement : Address of number is %u\n", p);
    p = p - 1;  // new_address = current_address - i * sizeof(data_type) and we also write this p--.
    printf("After Decrement : Address of number is %u", p);
    return 0;
}