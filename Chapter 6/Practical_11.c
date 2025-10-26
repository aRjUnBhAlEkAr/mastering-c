// Return an array.

// Example 1 : How to Return pointer pointing to the Array.

#include<stdio.h>

int *returnArray()
{
    int array[5];    // local to the returnArray() funtion.
    printf("Enter the Elements in array :\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    return array;
}

int main(){
    int *n;
    n = returnArray();

    printf("\nElements of array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", n[i]);
    }
    return 0;
}

// output of the program is segmentation fault.