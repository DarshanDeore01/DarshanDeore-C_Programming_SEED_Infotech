#include <stdio.h>

void printfibo(int num);

int main() {
    int num;
    printf("\nEnter the Number of Fibonacci Numbers to Print: ");
    scanf("%d", &num);
    printfibo(num);

    return 0;
}

void printfibo(int num) {
    int first = 0, second = 1, next, counter;
    
    printf("Fibonacci Series up to %d terms:\n", num);
    for (counter = 0; counter < num; counter++) {
        if (counter <= 1)
            next = counter;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}
