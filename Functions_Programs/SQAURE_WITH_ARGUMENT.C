#include<stdio.h>
void sqaure(int);
int main()
{
    printf("\n Enter Number ");
    int num1;
    scanf("%d",&num1);
    sqaure(num1);
}

void sqaure(int num1)
{
    

    int result=num1*num1;
    printf("%d",result);

}