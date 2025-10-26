// Void Pointer.

#include<stdio.h>   // Pre-Processor.

int main(){
    void *ptr1 = NULL;  // defining void pointer.
    int *ptr2 = NULL;   // defining integer pointer.
    char *ptr3 = NULL;  // defining character pointer.
    float *ptr4 = NULL; // defining floating pointer.

    // Printing size of void pointer.
    printf("size of void pointer : %d\n", sizeof(ptr1));

    // Printing size of integer pointer.
    printf("size of integer pointer : %d\n", sizeof(ptr2));

    // Printing size of character pointer.
    printf("size of character pointer : %d\n", sizeof(ptr3));

    // Printing size of floating pointer.
    printf("size of flaoting pointer : %d\n", sizeof(ptr4));

    return 0;
}