#include<stdio.h>

int main() {
    int result = 0, number, counter = 0, last_digit;
    printf("\nEnter the number to find the sum\n");
    scanf("%d", &number);

    while(number > 0) {
        last_digit = number % 10;
        result = last_digit + result;
        number = number / 10;
        counter=counter+1; // Increment counter for each digit processed
    }

    printf("The sum of digits is: %d\n", result);
    printf("The number of digits is: %d\n", counter);

    return 0;
}
