// void pointer.

// Examples : Dereferencing Pointer.

#include<stdio.h>

int main(){
    int a = 90;
    void *ptr;
    ptr = &a;

    // printf("value which is pointing by ptr pointer %d", ptr);    // this line will show error.
    // as we know we cannot dereference the void pointer.
    printf("value which is pointing by ptr pointer %d", *(int *)ptr);
    return 0;
}