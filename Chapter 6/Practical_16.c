// Passing array to function 

// Write a program to find minimum value in the array, passing array to the function.
#include<stdio.h>

int minarray(int [],int );

int main()
{
    int size, min;
    
    printf("Enter size of array : ");
    scanf("%d", &size);

    int array[size];

    min = minarray(array, size);

    printf("Minimum value inside the array is %d", min);
    return 0;
}

int minarray(int array[], int size)
{
    printf("\nEnter %d values in an Array :\n", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = array[0];
    for(int i = 0; i < size; i++)
    {
        // if(min > array[i])
        // {
        //     min = array[i];
        // }
        (min > array[i]) ? min = array[i] : printf(""); ;
    }
    return min;
}