/* Call by Reference.
            The address of the actual paramter is copied to formal parameter.
*/
#include<stdio.h>
void change(int *num);  // function declaration.

int main(){
    int x = 100;    // initializing variable 'x'
    printf("Before Function call value of x = %d\n", x);
    change(&x); // passing the address of the variable as actual parameter.
    printf("After  Function call value of x = %d", x);
    return 0;
}

void change(int *num)   // copied the address of actual parameter in '*num'
{
    printf("Before adding value inside the function num = %d\n", *num);
    *num += 100;
    printf("After  adding value inside the function num = %d\n", *num);
}