#include<stdio.h>

int main() {
    int number, prime=0, counter=2;
    printf("\nEnter the number to check prime or not\n");
    scanf("%d", &number);

    while(counter <= number/2) {
        if (number % counter == 0) {
            prime = 1;
            break;
        }
        counter++;
    }

    if(prime == 0 && number != 1) {
        printf("\nThe Given Number is Prime\n");
    }
    else {
        printf("\nThe Given Number is Not Prime\n");
    }

    return 0;
}
