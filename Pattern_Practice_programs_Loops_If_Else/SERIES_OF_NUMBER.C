#include<stdio.h>
int main()
{
    int number, max_length, counter = 1, result = 0, last_digit;

    printf("\nEnter Number to Find Series");
    scanf("%d",&number);

    printf("\nEnter Max length of Series");
    scanf("%d",&max_length);

    while(counter<=max_length)
    {
        last_digit = number % 10;
        result = result * 10 + last_digit;
        counter=counter+1;
        printf("\n%d\n",result);

    }

}