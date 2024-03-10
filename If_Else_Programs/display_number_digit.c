#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);

    if(number>=0 && number<9)
    {
        printf("\n\n The Number %d is a single digit number\n\n", number);
    }
    else if(number>=10 && number<99)
    {
        printf("\n\n The Number %d is a two digit number\n\n", number);
    }
    else if(number>=999 && number<1000)
    {
        printf("\n\n The Number %d is a three digit number\n\n", number);
    }
    else
    {
        printf("\n\n The Number is not Valid\n\n");
    }
}