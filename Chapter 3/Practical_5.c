// Write a Program to Calculate the Grade of the student according to the specific marks.

#include<stdio.h>

int main(){
    float mark;

    printf("Enter your Marks : ");
    scanf("%f", &mark);

    if(mark > 85 && mark <= 100)
    {
        printf("Congrats ! You scored grade A ...");
    }
    else if (mark > 60 && mark <= 85)
    {
        printf("You Scored grade B+ .");
    }
    else if (mark > 40 && mark <= 60)
    {
        printf("You Scored grade B .");
    }
    else if (mark > 30 && mark <=40)
    {
        printf("You Scored grade C .");
    }
    else
    {
        printf("Sorry you are Fail ...");
    }
    
    return 0;
}