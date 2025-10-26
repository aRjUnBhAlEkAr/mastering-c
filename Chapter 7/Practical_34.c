// void pointer.

// Example :

// Pre-Processor
#include<stdio.h>
#include<malloc.h>

// Execution Begins
int main(){
    int a = 10; // integer variable declaration.
    int *ptr = (int *)malloc(sizeof(int));  // assigning address to pointer using malloc() function.
    printf("%d\n", ptr);
    ptr = &a;   // ptr is pointing to integer variable a.
    printf("%d\t%d", ptr, &a);
    return 0;
}