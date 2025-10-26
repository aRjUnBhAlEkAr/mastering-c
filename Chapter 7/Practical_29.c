// Constant Pointer to a Constant.

// Example 1 :

#include<stdio.h>   // pre-processor

int main(){
    int a = 10;     //defining variable 'a'.
    int b = 20;     //defining variable 'b'.
    const int *const ptr = &a;  //defining constant pointer to pointer variable
    printf("Before\nAddress at ptr : %d\nValue at Address : %d\n\n", ptr, *ptr);
    return 0;
}