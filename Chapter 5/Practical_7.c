// Function call .
// Function without arguments and with return value.
// Example 2 : Calculate the area of the square.

#include<stdio.h>
float areaSquare(); // Function declaration.

int main(){
    float area = 0;
    area = areaSquare();    // Function call.
    printf("Area of Sqaure : %f", area);
    return 0;
}

float areaSquare()  // Function defination.
{
    float side = 0;
    printf("Enter the length of the side in meter : ");
    scanf("%f", &side);
    return side * side;
}