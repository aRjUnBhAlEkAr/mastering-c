#include<stdio.h>

int main(){
    int array[4][5] = {{1,2,3,10,20},{4,5,6,30,40},{7,8,9,50,60},{10,11,12,70,80}};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}