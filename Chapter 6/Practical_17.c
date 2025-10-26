// Passing array to the function.

// Write a program to sort array passing array to function.

#include<stdio.h>

int Bubble_sort(int []);

int main(){
    int numbers[5] = {33,22,55,11,44};
    Bubble_sort(numbers);
    return 0;
}

int Bubble_sort(int numbers[])
{
    int temp = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("Printing Sorted Elements List :\t");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", numbers[i]);
    }
}