// Function call.
// Function with arguments and with return value.
// Example 1 :  Addition of two numbers.

#include<stdio.h>
int addition(int, int);  // Function declaration.

int main(){
    int num1, num2, result = 0;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    result = addition(num1, num2);   // Function call.
    printf("Addition of two number : %d", result);
    return 0;
}

int addition(int num1, int num2) // Function definition.
{
    return num1 + num2;
}