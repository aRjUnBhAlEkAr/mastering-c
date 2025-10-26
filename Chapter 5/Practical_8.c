// Function call .
// Function with arguments and without return value.
// Example 1 :  addition of two numbers.

#include<stdio.h>
void sum(int ,int); // Function declaration.

int main(){
    int num1 = 0, num2 = 0;
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    sum(num1, num2);    // Function call.
    return 0;
}

void sum(int a, int b)  // Function definition.
{
    printf("Addtion : %d", a+b);
}