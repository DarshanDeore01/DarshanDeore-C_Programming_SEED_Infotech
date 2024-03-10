#include<stdio.h>
int main()
{
    const float pi=3.14;
    float radius;
    float area_of_circle;
    
    printf("\n\nEnter the Radius of Circle\n\n");
    scanf("%f",&radius);
    area_of_circle=pi*radius*radius;
    printf("\n\nThe area of circle is %d\n\n", area_of_circle);
    
}