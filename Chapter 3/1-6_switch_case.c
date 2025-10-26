// Switch Case Statements .
// Write a Program to Give rating as user want to give it using number from(1-5).

#include<stdio.h>

int main(){
    int rating;

    printf("Give Rating Between 1-5 : ");
    scanf("%d", &rating);

    switch(rating)
    {
        case 1 :
            printf("Rating is #\n");
            break;
        case 2 :
            printf("Rating is # #\n");
            break;
        case 3 :
            printf("Rating is # # #\n");
            break;
        case 4 :
            printf("Rating is # # # # \n");
            break;
        case 5 :
            printf("Rating is # # # # #\n");
            break;
        default:
            printf("Rating is Out of Range.");
    }
    return 0;
}
