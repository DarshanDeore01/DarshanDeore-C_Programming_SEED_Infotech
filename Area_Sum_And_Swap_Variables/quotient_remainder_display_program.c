#include <stdio.h>

int main() {
    float numerator;
    float denominator;
    float remainder;
    float quotient;

    printf("\n\n Enter Numerator: \n\n");
    scanf("%f", &numerator);

    printf("\n\n Enter Denominator: \n\n");
    scanf("%f", &denominator);

    remainder = numerator / denominator;
    quotient = (int)numerator % (int)denominator;

    printf("\n\n The remainder is %f \n\n", remainder);
    printf("\n\n The quotient is %f \n\n", quotient);

    return 0;
}
