// Write a program to sort the array in asceding order.

#include<stdio.h>

int main(){
    int n, temp;

    printf("Enter value of 'n' : ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d values in array : \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++)
    {
        //array[i]
        for(int j = i + 1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("After Sorting array in asceding order :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}