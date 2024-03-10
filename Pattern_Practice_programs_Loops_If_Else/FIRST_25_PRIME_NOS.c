#include <stdio.h>

int main() {
    int primeCount = 0;
    int number = 2; 
    while (primeCount < 25) {
        int isPrime = 1; 

        
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }

      
        if (isPrime == 1) {
            printf("%d ", number);
            primeCount++;
        }

        number++; 
    }

    return 0;   
}
