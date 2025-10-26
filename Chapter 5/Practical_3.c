// Use library function to calculate the area of a square with side a.
#include<stdio.h>
#include<math.h>

int main(){
    float side = 0;

    printf("Enter a Value of Side 'a' : ");
    scanf("%f", &side);

    printf("Area of Square = %d", (int)pow(side, 2));
    return 0;
}