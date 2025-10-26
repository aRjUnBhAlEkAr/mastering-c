// Write a program to determine whether a character entered by the user is lowercase.

#include<stdio.h>

int main(){
    char character;

    printf("Enter a Character : ");
    scanf("%c", &character);

    if (character >= 97 && character <= 122)
    {
        printf("%c is Lowercase character", character);
    }
    else
    {
        printf("%c is Uppercase character", character);
    }
    
    return 0;
}