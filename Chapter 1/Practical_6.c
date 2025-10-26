// Write a Program to Calculate the Simple Interest.
#include<stdio.h>

int main(){
    // Declaring Variables.
    int principle, rate = 4, years;
    printf("Calculating Simple Interest\n");

    printf("Enter Principle : ");
    scanf("%d",&principle);

    printf("Enter Years : ");
    scanf("%d",&years);

    int simpleInterest = (principle * rate * years)/100;    // Calculating Simple Interest.

    printf("Simple Interest : %d",simpleInterest);
    return 0;
}