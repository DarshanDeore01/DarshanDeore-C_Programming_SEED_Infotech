#include<stdio.h>
void sum_of_number();
int main()
{
    sum_of_number();
}

void sum_of_number()
{
    printf("\n Enter Number 1");
    int num1;
    scanf("%d",&num1);

    printf("\n Enter Number 2");
    int num2;
    scanf("%d",&num2);

    int result=num1+num2;
    printf("%d",result);

}