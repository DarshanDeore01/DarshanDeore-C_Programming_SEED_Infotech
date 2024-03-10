#include<stdio.h>
int main()
{
    int year;
    printf("Enter the yeat to check leap or not");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    printf("\n\n %d is a leap year", year);
    else
    {
        printf("\n\n %d is not a leap year", year);
    }
}