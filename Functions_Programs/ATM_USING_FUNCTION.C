#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
void withdraw(int num,int num2,int num3);
void deposit(int num, int num2);
int main()
{
    int withdraw_amt;
    int deposit_amt;
    int choice;
    int current_bal=50000;
    int balance_amt;
    int total_bal;

    printf("\n Press 1 to withdraw : ");
    printf("\n Press 2 to deposit : ");
    printf("\n Press 3 to exit : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n Enter Amount to Withdraw:\n");
        scanf("%d",&withdraw_amt);
        withdraw(withdraw_amt,balance_amt,current_bal);
    }
    else if(choice==2)
    {
        printf("\n Enter Amount to Deposit:\n");
        scanf("%d",&deposit_amt);
        deposit(deposit_amt, balance_amt);
    }
    else if(choice==3)
    { 
        exit(0);
    }
    else
    {
        printf("\n Invalid Input");
    }
  

}

void withdraw(int withdraw_amt,int balance_amt,int current_bal)
{

    if(withdraw_amt<=current_bal)
    {
        
        balance_amt=current_bal-withdraw_amt;
        printf("The balance is %d",balance_amt);
        
    }
    else
    {
        printf("\n You dont have enough balacne\n");
    }

}

void deposit(int deposit_amt,int balance_amt)
{

}