#include<stdio.h>
int main()
{
    int counter,number;
    printf("\n Enter the number for which you want to generate table\n");
    scanf("%d",&number);

    for(counter=1;counter<=10;counter=counter+1)
    {
        int result=number*counter;
        printf("\n\n %d*%d=%d\n\n",number,counter,result);
    }
}