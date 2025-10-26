/* Call by value.
            The value of the actual parameter is copied into the actual parameter.
*/
//Example 1 :

#include<stdio.h>
void change(int);   // Function declaration

int main(){
    int x = 100;    // intializing variable 'x'.
    printf("Before function call : %d\n",x);
    change(x);      // passing variable as actual parameter.
    printf("After function call  : %d", x);
    return 0;
}

void change(int num)    // copied the value of actual parameter in formal parameter 'num'.
{
    printf("Before adding value inside the function num = %d\n", num);
    num = num + 100;
    printf("After  adding value inside the function num = %d\n", num);
}