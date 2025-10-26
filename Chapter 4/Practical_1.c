// Write a menu driven program using do while loop .

#include<stdio.h>

int main(){
    int choice, dummy;
    char c;

    do
    {
        printf("1 - Hello .\n2 - Hello World .\n3 - exit . \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :
                printf("Hello\n");
                break;
            case 2 :
                printf("Hello World !\n");
                break;
            case 3 :
                exit(0);
                break;
            default:
                printf("Invalid Entry ...\n");
                break;
        }

        printf("do you want enter more ? (y/n) :");
        scanf("%d", &dummy);
        scanf("%c", &c);
    }while(c == 'y');

    return 0;
}