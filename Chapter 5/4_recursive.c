/* Recursive :
        The function which calls itself.
*/

#include<stdio.h>   // preprocessor.
int facto(int);     // Function declaration

int main(){
    int num = 0, factorial = 0; // intializing variables.
    printf("Enter a Number : ");
    scanf("%d", &num);
    factorial = facto(num);     // function call.
    printf("\nFactorial of %d is %d", num,factorial);
    return 0;
}
int temp = 5;   // Global variable.
int facto(int num)  // function definition.
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else 
    {
        temp *= (num - 1);
        printf("num = %d facto(%d) = %d\n", num, num - 1,temp);
        return num * facto(num - 1);    // recursive call.
    }
}