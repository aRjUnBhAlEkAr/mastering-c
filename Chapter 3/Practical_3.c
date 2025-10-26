// Write a program to Find largest number among three number.

#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter a First Number : ");
    scanf("%d", &num1);

    printf("Enter a Second Number: ");
    scanf("%d", &num2);

    printf("Enter a Third Number : ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("%d is Grater", num1);
    }

    if(num2 > num1 && num2 > num3)
    {
        printf("%d is Greater", num2);
    }

    if(num3 > num1 && num3 > num2)
    {
        printf("%d is Greater", num3);
    }
    return 0;
}