/* Break Statement. :
        used to exit the loop
    syntax:
        //  loop or switch case.
            break;
*/

#include<stdio.h>

int main(){
    int i;  // declaring variables.

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
        if(i == 5)
        {
            printf("Loop successfully terminated !");
            break;      // using break statement to terminate the code.
        }
    }

    return 0;
}