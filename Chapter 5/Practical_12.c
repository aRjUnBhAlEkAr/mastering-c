// Call by Value.
//Write a program to swap(change the value of a to b and b to a) the value of two variables.

#include<stdio.h>
void swap(int, int);

int main(){
    int a = 10, b = 20;
    printf("Before swap() function call the values in main a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After  swap() function call the values in main a = %d, b = %d", a, b);
    return 0;
}

void swap(int num1, int num2)
{
    int a = num1, b = num2, temp;
    printf("Before swapping values in function a = %d, b = %d\n", num1, num2);
    temp = a;
    a = b;
    b = temp;
    printf("After  swapping values in function a = %d, b = %d\n", a, b);
}