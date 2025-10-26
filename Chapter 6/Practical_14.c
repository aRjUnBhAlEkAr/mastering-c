// Return an array.
// using static array.
// Example 1 : 

#include<stdio.h>   // Pre processor.

int *getArray();    // function declaration.

int main(){
    int *ptr;   // pointer declaration.
    ptr = getArray();   // function call.

    printf("\nElements of an Array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    return 0;
}

int *getArray()     //function definition.
{
    static int array[5];    // declaration of static array[] variable.
    printf("Enter 5 elements in array :\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d\t", &array[i]);
    }
    return array;
}