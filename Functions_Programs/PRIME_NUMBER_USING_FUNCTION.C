#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("\n Enter the number to check if its prime or not \n");
    scanf("%d",&num);
    prime(num);
}

void prime(int num)
{

    int counter, is_prime=0;
    for(counter=1;counter<=num;counter=counter+1)
    {
        if(num%counter==0)
        {
            is_prime++;
        }
    }

    if(is_prime==2)
    {
        printf("%d is prime",num);

    }
    else
    {
        printf("%d is not prime",num);
    }
}