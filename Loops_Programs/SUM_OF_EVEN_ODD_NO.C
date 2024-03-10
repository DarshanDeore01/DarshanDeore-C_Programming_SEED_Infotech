#include<stdio.h>
int main()
{
    int number=1, even_sum=0, odd_sum=0;
    while(number<=20)
    {
        if(number%2==0)
        {
            even_sum=even_sum+number;
        }
        else
        {
            odd_sum=odd_sum+number;
        }
        number=number+1;
    }

    printf("\n\n The sum of even number from 1 to 20 is:%d",even_sum);

    printf("\n\n The sum of odd number from 1 to 20 is:%d",odd_sum);
    
}
