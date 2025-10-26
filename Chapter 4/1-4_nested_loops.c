/* Nested Loop :
                Any type of Loop inside another Loop is known as Nested Loop.
    Syntax :
                outer_loop{
                    inner_loop{
                        //inner loop statements.
                    }
                    //outer loop statements.
                }
*/

#include<stdio.h>

int main(){

    for(int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", (i*j));
        }
        printf("\n");
    }
    return 0;
}