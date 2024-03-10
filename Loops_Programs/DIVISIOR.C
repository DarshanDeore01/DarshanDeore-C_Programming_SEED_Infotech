#include<stdio.h>
int main()
{
    int number, counter=1, result=1;
    printf("\nEnter the number to find the divisor\n");
    scanf("%d",&number);

    while(counter<=number/2)
    {
        if(number%counter==0)
        {
            printf("\n The divisor is: %d\n",counter);
        }
        counter=counter+1;
        
    }


}