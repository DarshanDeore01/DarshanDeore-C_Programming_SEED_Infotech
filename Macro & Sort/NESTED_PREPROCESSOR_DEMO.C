#include<stdio.h>

#define SQUARE(num) ((num) * (num))
#define CUBE(num) SQUARE(num) * (num)

int main() {
            int num;
    
            printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Square of %d is: %d\n", num, SQUARE(num));
    printf("Cube of %d is: %d\n", num, CUBE(num));
    
    return 0;
}
            

            