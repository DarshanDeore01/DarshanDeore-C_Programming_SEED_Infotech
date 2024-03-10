#include <stdio.h>
#include <math.h>

int main() {
    int number,total_digit_in_number = 0, last_digit, temp, armstrong = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    temp = number;
    
   
    while (temp != 0) {
        total_digit_in_number=total_digit_in_number+1;
        temp /= 10;
    }
    
    temp = number;
    
    
    while (temp != 0) {
        last_digit = temp % 10;
        armstrong =last_digit*total_digit_in_number;
        temp= temp/10;
    }
    
    if (armstrong == number) {
        printf("The number is Armstrong.\n");
    } else {
        printf("The number is not Armstrong.\n");
    }
    
    return 0;
}
