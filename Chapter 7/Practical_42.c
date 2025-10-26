// Dereferencing Variable.

#include<stdio.h>

int main(){
    int a = 10;

    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &a;

    *ptr1 = 100;
    *ptr2 = 200;

    printf("value at the variable 'a' is %d", a);
    return 0;
}