// infinite loop using define preprocessor .

#include<stdio.h>
#define infinite for( ; ; )

int main()
{
    infinite
    {
        printf("Hello");
    }

    return 0;
}