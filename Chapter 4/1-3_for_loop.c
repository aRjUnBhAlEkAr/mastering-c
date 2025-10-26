/* for loop.
Syntax of for loop :
for (Expression 1; Expression 2; Expressoion 3)
{
        // code to be executed.
}
*/

#include<stdio.h>

int main(){
    
    //Example 1: Expression 1 . We can initialize more than one variable in Expression 1. 
    printf("Expression 1 :\n");
    for(int i=1,b=1;i <=10 ; i++){
        printf("%d\t%d\n", i, (b*i));
    }

    //Example 2: Expression 2 . This Expression can have more than one condition.
    printf("\nExpression 2 :\n");
    for(int i=0; i<=5 && i >= 0; i++){
        printf("%d\n",i);
    }

    //Example 3: Expression 3 . 
    printf("\nExpression 3 :\n");
    for (int i = 0; i<=10 ; i += 2)
    {
        printf("%d\n", i);
    }
    
    printf("\n\nScope of variable.\n");
    int i;
    for( i = 0; i<=5 ; i++){
        printf("%d\n", i);
    }
    printf("\n%d",i);

    return 0;
}