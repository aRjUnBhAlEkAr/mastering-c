// void pointer .

#include<stdio.h>

int main(){
    int i = 10;         // integer variable declaration.
    float f = 20.00;    // floating variable declaration.
    char c = 'c';       // character variable declaration.

    int *iptr = &i;     // integer pointer declaration.
    float *fptr = &f;   // floating pointer declaration.
    char *cptr = &c;    // character pointer declaration.

    void *vptr; // void pointer declaration.

    vptr = iptr;    // void pointer point to iptr
    printf("Integer value %d\n", *((int *)vptr));

    vptr = fptr;    // void pointer point to fptr
    printf("floating value %f\n", *((float *)vptr));

    vptr = cptr;    // void pointer point to cptr
    printf("character value %c\n", *((char *)vptr));

    return 0;
}