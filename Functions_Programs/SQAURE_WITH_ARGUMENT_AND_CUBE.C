#include<stdio.h>
void sqaure(int);
void cube(int,int);
int main()
{
    printf("\n Enter Number");
    int num1;
    scanf("%d",&num1);
    sqaure(num1);
}

void sqaure(int num1)
{
    

    int result=num1*num1;
    printf("%d",result);
    cube(result,num1);

}

void cube(int result,int num1)
{
    int result2=result*num1;
    printf("\n The cube is %d",result2);
}