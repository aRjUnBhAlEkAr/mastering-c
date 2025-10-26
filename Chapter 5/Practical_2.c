#include<stdio.h>
// function declaration
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main(){
    int num1 = 0, num2 = 0, addtion = 0, substraction = 0, multiplication = 0;
    float division = 0;

    printf("Enter any two values : ");
    scanf("%d %d", &num1, &num2);

    // function call
    addtion = sum( num1, num2);
    printf("\nAddition : %d", addtion);

    substraction = sub( num1, num2);
    printf("\nSubstraction : %d", substraction);

    multiplication = mul( num1, num2);
    printf("\nMultiplication : %d", multiplication);

    division = (float)div( num1, num2);
    printf("\nDivision : %f", division);

    return 0;
}

// function definition.
int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return (float)a/b;
}