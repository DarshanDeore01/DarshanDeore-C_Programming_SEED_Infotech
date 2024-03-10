#include <stdio.h>

int main() {
    float amount_to_withdraw;
    float amount_available=50000;

    printf("Enter the Amount to Withdraw: ");
    scanf("%f", &amount_to_withdraw);


    if (amount_available < amount_to_withdraw) {
        printf("\nThe amount you are trying to withdraw is greater than the amount available\n");
    } else {
        printf("\nYou can proceed with the withdrawal\n");
    }

    printf("\nThank you for using ATM!!\n");

    return 0;
}
