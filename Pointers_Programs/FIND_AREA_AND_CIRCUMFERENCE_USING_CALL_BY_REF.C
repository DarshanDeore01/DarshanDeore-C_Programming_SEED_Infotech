#include<stdio.h>

void calculate(float, float*, float*);

int main() {
    float radius, circumference, area;
    printf("\nEnter the radius: ");
    scanf("%f", &radius);
    calculate(radius, &circumference, &area);
    printf("\nThe Circumference is %f and Area is %f\n", circumference, area);

    return 0;
}

void calculate(float radius, float *circumference, float *area) {
    const float pi = 3.14;
    *circumference = 2 * pi * radius;
    *area = pi * radius * radius;
}
