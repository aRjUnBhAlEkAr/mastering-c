/* do while loop .
    do
    {
        //code to be executed.
    } while (condition);
*/

// Write a program to print table of 1 using do while loop.
#include<stdio.h>

int main(){
    int i=1, num;

    do
    {
        printf("%d\n",i);
        i++;
    } while(i<=10);
        
    return 0;
}