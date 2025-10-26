//  Write a program to calculate force of attraction on a body of mass, m exerted by earth.

#include<stdio.h>
float force(float);     // function declaration.

int main(){
    float mass, result;
    printf("Enter a mass in kg : ");
    scanf("%f", &mass); // accepting value at address of mass.

    result = force(mass);   // function call

    printf("The value of force : %.2f", result);
    return 0;
}

float force(float mass)
{
    return mass * 9.8;  // return multiplication.
}