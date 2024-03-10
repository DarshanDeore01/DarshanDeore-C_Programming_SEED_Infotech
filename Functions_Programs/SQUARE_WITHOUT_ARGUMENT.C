#include<stdio.h>
void sqaure();
int main()
{
    sqaure();
}

void sqaure()
{
    printf("\n Enter Number ");
    int num1;
    scanf("%d",&num1);

    int result=num1*num1;
    printf("%d",result);

}