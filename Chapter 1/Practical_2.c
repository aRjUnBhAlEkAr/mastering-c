// Write a C Program to Calculate Area of Rectangle.
#include<stdio.h>

int main(){
    //Declearing Variables.
    float length,breadth;
    
    printf("For Calculating the Area of Rectangle\n");
    printf("Enter the Length : ");
    scanf("%f",&length);     // Receiving value of l.

    printf("Enter the Breadth: ");
    scanf("%f",&breadth);     // Receiving value of b.

    float area = length * breadth;  // Calculating AREA OF RECTANGLE.
    printf("Area of Rectangle : %f",area); 
    return 0;

}