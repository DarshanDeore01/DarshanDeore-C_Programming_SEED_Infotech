#include<stdio.h>
#define PI 3.14
#define AREA(radius) (radius)*(radius)*(PI)
int main()
{
    float radius;
    printf("\n Enter the radius of the circle\n");
    scanf("%f",&radius);
    float area= AREA(radius);

    int area;
 

    printf("\n The are of the circle is: %f \n",area);
    
}
