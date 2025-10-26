/*  Write a program to print following pattern for odd number of given number.
    *
    * * *
    * * * * *
*/

#include<stdio.h>
#include<stdlib.h>
void printPattern(int);

int main(){
    int n;

    printf("Enter a value of n : ");
    scanf("%d", &n);

    printPattern(n);
    sleep(10);
    return 0;
}

void printPattern(int n)
{
    int i = 1;
    while(i <= n)
    {
        if(i%2 == 1)
        {
            int j = 1;

            while (j<=i)
            {
                printf("*\t");
                j++;
            }     
        }
        printf("\n");
        i++;
    }
}