#include<stdio.h>

int main() {
    float withdraw, deposit, balance = 50000.00;
    int choice, new_pin, old_pin = 2398;
    long long int old_number=7744062398;
    long long int new_number;


    printf("\nEnter the choice\n");
    printf("\n 1: Withdraw Money \n 2: Deposit Money \n 3: Change ATM Pin \n 4: Change Mobile Number \n 5: Check Balance \n");
    scanf("%d", &choice);

    switch(choice) {
        case 5:
            printf("\nThe balance is %.2f\n", balance);
            break;

        case 1:
            printf("\nEnter the amount to withdraw\n");
            scanf("%f", &withdraw);

            if(withdraw > balance) {
                printf("\nYou don't have enough balance\n");
            } else {
                balance -= withdraw;
                printf("\nWithdrawal successful\n");
            }
            break;

        case 2:
            printf("\nEnter the amount to deposit\n");
            scanf("%f", &deposit);
            balance += deposit;
            printf("\nThe new balance is: %.2f\n", balance);
            break;

        case 3:
            printf("\nEnter old pin\n");
            scanf("%d", &old_pin);
            if(old_pin == 2398) {
                printf("\nEnter the new pin:\n");
                scanf("%d", &new_pin);
                old_pin = new_pin;
                printf("\nThe new pin is %d\n", new_pin);
            } else {
                printf("\nYou cannot set new pin as you have entered wrong old pin\n");
            }
            break;
        
        case 4:
            printf("\nEnter old mobile number\n");
            scanf("%d", &old_number);
            if(old_number == 7744062398) {
                printf("\nEnter the new mobile number:\n");
                scanf("%lld", &new_number);
                old_number = new_number;
                printf("\nThe new number is %lld\n", new_number);
            } else {
                printf("\nYou cannot set new number as you have entered wrong old number\n");
            }
            break;

            default:
            printf("\n Ivalid Choice\n");
    }

    return 0;
}
