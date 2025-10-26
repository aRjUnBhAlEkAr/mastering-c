// Write a program to check whether a person is eligible to vote or not.

#include<stdio.h>

int main(){
    int age;

    printf("Enter you age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to Vote.");
    }
    else
    {
        printf("Sorry... You Can't Vote.");
    }
    
    return 0;
}