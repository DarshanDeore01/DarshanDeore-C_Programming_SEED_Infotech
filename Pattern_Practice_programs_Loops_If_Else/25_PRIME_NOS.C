#include <stdio.h>

int main() {
    int num = 2; 
    int count = 0; 

    while (count < 25) {
        int is_prime = 0; 

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 1; 
                break;
            }
        }

        if (is_prime==1) {
            printf("%d ", num);
            count++;
        }

        num++; 
    }

    return 0;
}
