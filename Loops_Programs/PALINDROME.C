#include<stdio.h>

int main() {
    int result = 0, number, counter = 0, last_digit,reverse=0,temp;
    printf("\nEnter the number to find the palindrome\n");
    scanf("%d", &number);
    temp=number;

    while(number > 0) {
        last_digit = number % 10;
        reverse = reverse * 10 + last_digit;
        number = number / 10;
        counter=counter+1; 
    }

    if(reverse==temp)
    {
          printf("\n The Number is palindrome\n");
    }
    else
    {
          printf("\n The Number is not palindrome\n");
    }
    

    return 0;
}
