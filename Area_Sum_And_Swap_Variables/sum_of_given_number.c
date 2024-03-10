#include<stdio.h>
int main()
{
    printf("Enter the number to find the sum");
    int number;
    int sum;
    scanf("%d",&number);
    sum=(number % 10) + ((number / 10) % 10) + (number / 100);
    printf("The sum is %d",sum);
}