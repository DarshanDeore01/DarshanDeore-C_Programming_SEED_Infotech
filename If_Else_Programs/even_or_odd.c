#include<stdio.h>
int main()
{
    int number;

    printf("\nEnter the number to check even or odd");
    scanf("%d", &number);

    if(number%2==0)
    {
        printf("\n The Number is even");
    }
    else
    {
        printf("\n The Number is odd");
    }
}