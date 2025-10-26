// Write a C Program to Convert Celsius to Fahrenheit .
#include<stdio.h>

int main(){
    // Declaring Variables.
    float celsius, far;
    far = (celsius * 9 / 5) + 32;

    printf("Enter Value of Celsius Temperature : ");
    scanf("%f",&celsius);
    printf("Enter");
    printf("The Value of Celsius to Fahrenheit is : %f",far);
    return 0;
}