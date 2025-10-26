// Write a C Program to Calculate Area of Cylinder.
#include<stdio.h>

int main(){
    //Declaring Variables.
    float radius,height;
    float pi = 3.14;

    printf("For Calculating Area of Cylinder\n");
    printf("Enter Radius of Cylinder : ");
    scanf("%f",&radius);

    printf("Enter Height of Cylinder : ");
    scanf("%f",&height);

    float area_of_cylinder = pi * radius * radius * height ;
    printf("\nArea of Cylinder : %f",area_of_cylinder);
    return 0;
}