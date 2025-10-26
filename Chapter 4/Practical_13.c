// Break statement .
// write a programe to print 1 - 10 natural number and make while true.
#include<stdio.h>

int main()
{
    int i = 1;

    while(1)
    {
        printf("%d\n", i);
        if(i == 10)
        {
            break;
        }
        i++;
    }
    return 0;
}