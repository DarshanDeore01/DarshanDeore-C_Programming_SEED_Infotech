#include<stdio.h>
void sum(int*,int*);
int main()
{
    int sum1=0,sum2=0;
    sum(&sum1,&sum2);
    printf("\n The Sum 1 is %d & The Sum 2 is %d",sum1,sum2);
}

void sum(int *sum1, int *sum2)
{
    int coumter=1;
    for(coumter;coumter<=10;coumter=coumter+1)
    {
        if(coumter%2==0)
        {
            *sum1=*sum1+1;
        }
        else
        {
            *sum2=*sum2+1;
        }
    }
}