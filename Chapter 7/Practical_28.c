// Pointer to Constant.

// Example 3 :

#include<stdio.h>

int main(){
     // Constant Pointer.
    int a = 10;
    int b = 20;
    int *const ptr1 = &a;
    printf("CONSTANT POINTER\nBefore changing:\nAddress at ptr1 : %u\nValue at Address : %d\n", ptr1, *ptr1);
    *ptr1 = b;
    printf("After changing:\nAddress at ptr1 : %u\nValue at Address : %d\n\n", ptr1, *ptr1);

    // Pointer to Constant.
    int x = 100;
    int y = 200;
    const int *ptr2 = &x;
    printf("POINTER TO CONSTANT\nBefore changing:\nAddress at ptr2 : %u\nValue at Address : %d\n", ptr2, *ptr2);
    ptr2 = &y;
    printf("After changing:\nAddress at ptr2 : %u\nValue at Address : %d", ptr2, *ptr2);
    return 0;
}