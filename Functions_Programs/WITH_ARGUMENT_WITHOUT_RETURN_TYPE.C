#include<stdio.h>
void sum_of_number(int,int);
int main()
{
    printf("\n Enter Number 1");
    int num1;
    scanf("%d",&num1);

    printf("\n Enter Number 2");
    int num2;
    scanf("%d",&num2);

    sum_of_number(num1,num2);

}

void sum_of_number(int num1,int num2)
{

    int result=num1+num2;
    printf("%d",result);

}