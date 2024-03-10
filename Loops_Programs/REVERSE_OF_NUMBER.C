#include<stdio.h>

int main() {
    int result = 0, number, counter = 0, last_digit,reverse;
    printf("\nEnter the number to find the reverse\n");
    scanf("%d", &number);

    while(number > 0) {
        last_digit = number % 10;
        reverse = reverse * 10 + last_digit;
        number = number / 10;
        counter=counter+1; 
    }

    printf("The reverse is: %d\n", reverse);
    printf("The number of digits is: %d\n", counter);

    return 0;
}
