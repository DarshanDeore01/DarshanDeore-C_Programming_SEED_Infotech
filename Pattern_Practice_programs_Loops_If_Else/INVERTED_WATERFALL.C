#include<stdio.h>
int main()
{
    int row,colum;
    for(row=1;row<=5;row=row+1)
    
    {
        for(colum=5;colum>=row;colum=colum-1){
            printf("*");
        }
        printf("\n");
    }
}