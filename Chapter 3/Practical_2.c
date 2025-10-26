/* Write a program to find whether a year entered by the user is a leap year or not.
    take year as input from the user.*/
#include<stdio.h>

int main(){
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);


    if(year%4==0 && year%100 != 0)
    {
        printf("%d is Leap year", year);
    }
    else
    {
        printf("%d is not Leap year");
    }
    
    return 0;
}