#include <stdio.h>

int check(int);
int prime(int);

int main() {
    int num, result = 0, result_2 = 0;
    
    do {
        printf("\nEnter the number: ");
        scanf("%d", &num);
        result = check(num);
    } while (result ==0);

    result_2 = prime(num);

    if (result_2 == 1) {
        printf("\nThe number is prime.\n");
    } else {
        printf("\nThe number is not prime.\n");
    }

    return 0;
}

int check(int num) {
    if (num >= 0) {
        return 1;
    } else {
        printf("Please enter a positive number.\n");
        return 0;
    }
}

int prime(int num) {
    int counter, is_prime = 0;

    for (counter = 1; counter <= num; counter++) {
        if (num % counter == 0) {
            is_prime++;
        }
    }

    if (is_prime == 2) {
        return 1;
    } else {
        return 0;
    }
}
