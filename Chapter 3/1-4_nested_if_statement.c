// Nested if Statement.
// Write a program to 

#include<stdio.h>

int main(){
    int age;
    char gender;

    printf("Enter your Gender(M/F) :");
    scanf("%c",&gender);
    
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if (age >= 18)
    {
        if (gender=='M' || gender == 'm')
        {
            printf("Your Sitting arrangement is at Right side of the Holl.");
        }

        if (gender == 'F' || gender == 'f')
        {
            printf("Your Sitting arrangement is at Left side of the Holl.");
        }
        
    }
    else
    {
        printf("\nYour Sitting arrangement is at Center of the Holl");
    }
    
    return 0;
}