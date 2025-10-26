// Function call .
// Function with arguments and without return value.
// Example 2 : Calculate average of five numbers.

#include<stdio.h>
void average(int, int, int, int, int);  // Function declaration.

int main(){
    int num1, num2, num3, num4, num5;

    printf("Enter five Numbers :\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    average(num1, num2, num3, num4, num5);  // Function call.
    return 0;
}

void average(int num1, int num2, int num3, int num4, int num5)  // function definition.
{
    float average = 0;
    average = (num1+num2+num3+num4+num5)/5; // calculating average of given numbers.
    printf("Average of given five numbers : %f", average);
}