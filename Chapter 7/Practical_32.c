// void pointer.

#include<stdio.h>

int main(){
    int i = 10;
    float f = 20.00;
    char c = 'A';
    void *ptr = NULL;

    ptr = &i;
    printf("Integer value in Void Pointer : %d\n", *(int *)ptr);

    ptr = &f;
    printf("Floating value in Void Pointer : %f\n", *(float *)ptr);
    return 0;
}