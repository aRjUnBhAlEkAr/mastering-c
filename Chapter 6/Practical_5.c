// Write a program to find largest and second_largest number in the array.

#include<stdio.h>

int main(){
    int n, largest, second_largest;

    printf("Enter a value of 'n' : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d values in array : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    second_largest = array[1];

    for(int i = 0; i < n; i++)
    {
        if(array[i] > largest)
        {
            second_largest = largest;
            largest = array[i];
        }
        else if (array[i] > second_largest && array[i] != largest)
        {
            second_largest = array[i];
        }
    }

    printf("The largest number is %d and second largest number is %d", largest, second_largest);
    return 0;
}