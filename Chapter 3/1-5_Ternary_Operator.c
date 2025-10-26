/* --> Ternary Operator :
            A short hand "if-else" can be written using Conditional Operator or Ternary Operator .
            Syntax : Condition ? expression-if-true : expression-if-false;
*/

#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    (num < 10)? printf("%d is less than 10",num) : printf("%d is greater than 10",num);

    return 0;
}