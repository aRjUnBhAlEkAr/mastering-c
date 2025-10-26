// Write a program to print table for the given number using do while loop

#include<stdio.h>

int main(){
    int i = 1, num;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    do
    {
        printf("%d  -  %d\n",i,(i*num));
        i++;
    } while (i <= 10);
    
    return 0;
}