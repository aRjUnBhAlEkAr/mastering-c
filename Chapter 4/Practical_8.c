// Nested For loop.
// Write a program to print table from 1 - 10 using nested for loop 

#include<stdio.h>

int main(){
    int num;    //declaring variable

    printf("Enter a Number : ");
    scanf("%d", &num);  // input number

    for(int i = 1; i <= num; i++)   //outer for loop
    {
        for(int j = 1; j <= 10; j++)    //inner for loop
        {
            printf("%d\t", (i*j));  // printing the table of 'i'.
        }
        printf("\n");   // new line.
    }
    return 0;
}