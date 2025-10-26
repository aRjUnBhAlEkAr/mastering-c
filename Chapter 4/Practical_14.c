//Break Statement.

#include<stdio.h>

int main(){
    int num = 2, choice;

    do
    {
        int i = 1;
        while (i<=10)
        {
            printf("%d  x  %d = %d\n", num, i, num*i);
            i++;
        }
        
        printf("Do you want to continue with the table of %d, enter any non-zero value : ", num+1);
        scanf("%d", &choice);

        if(choice == 0)
        {
            break;
        }
        num++;
    } while (1);
    
    return 0;
}