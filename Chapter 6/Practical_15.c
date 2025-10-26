// Return an Array.
// Using Structure.
// Example 1 : Return an Array using structure.

#include<stdio.h>   // Pre processors.

// defining structure variable using struct keyword and it is user defined data type.
struct array
{
    int array[5];
};

struct array getArray()     // structure getArray() function definition
{
    struct array y;     // structure variable 'y' declaration. 

    printf("Enter elements in an array : \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &y.array[i]);
    }
    return y;
}

int main(){
    struct array x;     // structure variable 'x' declaration
    x = getArray();     // defining variable x and returning value from getArray() function.

    printf("Elements you have entered are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", x.array[i]);
    }
    return 0;
}