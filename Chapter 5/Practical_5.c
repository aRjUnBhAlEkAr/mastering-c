//// Function call .
// Function without arguments and without return value.
// Example 2 :  Addition of two numbers.

#include<stdio.h>
void addition();     //Function declaration.

int main(){
    addition();      //Function Call.
    return 0;
}

void addition()
{
    int num1 = 0, num2 = 0, sum = 0;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    printf("Addition : %d", sum);

}