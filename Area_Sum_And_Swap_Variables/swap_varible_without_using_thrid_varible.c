#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("\nEnter the first number\n");
    scanf("%d",&a);
    
    printf("\nEnter the second number\n");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nThe numbers after swaping are\n");

    printf("\nNumber 1: %d\n",a);

    printf("\nNumber 2: %d\n",b);



}