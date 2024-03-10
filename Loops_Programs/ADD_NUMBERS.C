#include<stdio.h>


int main() {
    int num1, num2, sum = 0, counter = 0;
    
    do {
        printf("\nEnter the number 1: ");
        scanf("%d", &num1);
        
        // Check if num1 is 0, if so, exit the loop
        if (num1 == 0)
            break;

        printf("Enter the number 2: ");
        scanf("%d", &num2);

        sum = num1 + num2;

        printf("The Sum of %d and %d is: %d\n", num1, num2, sum);
        counter = counter + 1;
    } while (num1=!0); 

    return 0;
}
