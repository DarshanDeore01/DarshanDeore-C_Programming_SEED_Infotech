#include<stdio.h>
int main()
{
    int counter;
    for(counter=1;counter<=50;counter=counter+1)
    {
        if(counter%2==0)
        {
            printf("\n\n %d is a even number", counter);
        }
        else
        {
            printf("\n\n %d is a odd number", counter);
        }
    }
}