#include<stdio.h>
int main()
{
    int counter, number, factorial = 1;
    printf("\nEnter the number for which you want to calculate factorial: ");
    scanf("%d", &number);

    for(counter = 1; counter <= number; counter = counter + 1)
    {
        factorial = factorial * counter;
        printf("%d! = %d\n", counter, factorial);
    }

    return 0;
}
