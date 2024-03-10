#include<stdio.h>
int main()
{
    float SP,CP,profit,loss;
    printf("\nEnter the Selling Price");
    scanf("%f",&SP);
    printf("\nEnter the Cost Price");
    scanf("%f",&CP);
    if(SP>CP)
    {
        profit=SP-CP;
        printf("\nThe Profit is %f", profit);
    }
    else
    {
       if(SP==CP)
       {
        printf("\nThere is no profit or loss");
       }
       else
       {
        loss=CP-SP;
        printf("\nThe Loss is %5.2f", loss);
       } 
    }
}