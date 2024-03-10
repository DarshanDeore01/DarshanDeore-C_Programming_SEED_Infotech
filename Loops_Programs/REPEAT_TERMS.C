#include <stdio.h>

int main() {
    int number_to_repeat, num_terms, i;

    
    printf("Enter the number to repeat in the series: ");
    scanf("%d", &number_to_repeat);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &num_terms);

    
    for (i = 1; i <= num_terms; i++) {
        int j;
        for (j = 0; j < i; j++) {
            printf("%d", number_to_repeat);
        }
        printf(" ");
    }

    return 0;
}
