// Nested While loop.
// Write a program to print table form 1 - 10 using nested while loop .

#include<stdio.h>

int main(){
    int i = 1;

    while(i<=10)
    {
        int j = 1;
        while (j <= 10)
        {
            printf("%d\t", (i*j));
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}