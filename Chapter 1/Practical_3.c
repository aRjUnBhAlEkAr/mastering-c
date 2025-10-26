// Write a C Program to Calculate Area of Circle.
#include<stdio.h>

int main(){
    //Declaring variables.
    float radius;
    float pi = 3.14;

    printf("For Calculating Area of Circle\n");
    printf("Enter Radius of circle : ");
    scanf("%f",&radius);

    float area_of_circle = pi * radius * radius;    // Calculating AREA OF CIRCLE.
    printf("Area of Circle : %f",area_of_circle);
    return 0;
}