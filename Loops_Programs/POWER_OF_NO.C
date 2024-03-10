#include<stdio.h>
int main()
{
    int number, power, result = 1, counter = 1;
    printf("\nEnter the number\n");
    scanf("%d",&number);

    printf("\nEnter the power\n");
    scanf("%d",&power);

    while(counter<=power)
    {
        result = result * number;
        counter=counter+1;
    }
    
    printf("\n The result is: %d\n",result);
}