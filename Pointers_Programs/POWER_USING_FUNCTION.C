#include<stdio.h>
void power(int,int,int*);
int main()
{
    int result, base, index;
    printf("\n Enter the base\n");
    scanf("%d",&base);
    printf("\n Enter the index\n");
    scanf("%d",&index);
     power(base,index,&result);
     if(result<0)
        {
            printf("\n Error\n");

        }
        else
        {
           printf("\n The result is %d",result);
        }

}

void power(int base,int index,int *result)
{          
        int counter=1;
        *result=1;
        for(counter;counter<=index;counter=counter+1)
        {
            *result=(*result)*base;
            }
            
}