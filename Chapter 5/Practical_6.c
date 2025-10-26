// Function call .
// Function without arguments and with return value.
// Example 1 : Addition of two numbers.

#include<stdio.h>
int sum();      //Function declaration.

int main(){
    int addition = sum();   // Function Call.
    printf("Addtion : %d", addition);
    return 0;
}

int sum()       // Function definition.
{
    int num1 = 0, num2 = 0;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
    return num1 + num2;
}