/* Continue statement :
            Used to bring control to the beginning of the loop.
    Syntax :
            // loop statements
            continue;
            // line of code which is to be skipped.
*/

#include<stdio.h>

int main(){
    int i = 1;

    while (i <= 10)
    {
        if(i == 5)
        {
            // this condition skippes 5 .
            i += 1;
            continue;
            printf("Code after continue ...");  //this code skipped.
        }
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}