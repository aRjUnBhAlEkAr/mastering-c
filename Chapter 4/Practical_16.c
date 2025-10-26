// goto statement .
// write a program to terminate multiple loop using goto statement .

#include<stdio.h>

int main(){
    int i, j, k;    // declaring local variables.

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            for(k = 1; k<= 5; k++)
            {
                printf("i : %d j : %d k : %d\n", i, j, k);
                if(i == 3 && j == 3 && k == 3)
                {
                    goto out; // goto statement transfer a control to 'out' label.
                }
            }
        }
    }
    out :
        printf("came out of the loop.");
    return 0;
}