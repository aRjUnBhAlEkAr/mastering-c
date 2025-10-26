// Write a program to swap values without using third variable.

#include<stdio.h>

int main(){
    int num1 = 10, num2 = 20;
    int *p1 = &num1, *p2 = &num2;

    printf("Before swap : num1 is %d & num2 is %d\n\n", *p1, *p2);

    *p1 = *p1 + *p2;   // 10 = 10 + 20;  now the value of p1 is 30
    *p2 = *p1 - *p2;   // 20 = 30 - 10;  now the value of p2 is 10
    *p1 = *p1 - *p2;   // 30 = 30 - 10;  now the value of p1 is 20

    printf("After swap  : num1 is %d & num2 is %d\n", *p1, *p2);

    return 0;
}