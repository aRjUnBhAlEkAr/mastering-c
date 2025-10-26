// void pointer

#include<stdio.h>   // Pre-Processor.

int main(){
    int a = 10;         // defining integer variable a.
    float b = 100.00;   // defining floating variable b.
    char c = 'A';       // defining character variable c.
    void *ptr = NULL;   // declaration of void pointer.

    ptr = &a;   // pointer points to integer variable a.
    printf("Integer variable in void pointer : %d\n", *(int *)ptr);

    ptr = &b;   // pointer points to flaoting variable b.
    printf("Floating variable in void pointer : %f\n", *(float *)ptr);

    ptr = &c;   // pointer points to character variable c.
    printf("Character variable in void pointer : %c", *(char *)ptr);
    return 0;
}