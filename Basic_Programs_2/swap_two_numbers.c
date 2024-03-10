#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

      printf("Enter the First Number\n\n");
    scanf("%d", &a);

    printf("Enter the Second Number\n\n");
    scanf("%d", &b);

    printf("\n\nThe numbers before swapping are\n\n");
    printf("Number 1= %d Number 2= %d",a,b);

    c = a; // Store the value of a in c
    a = b; // Assign the value of b to a
    b = c; // Assign the original value of a (stored in c) to b

    printf("\n\nThe numbers after swapping are\n\n");
    printf("Number 1= %d Number 2= %d",a,b);

}
