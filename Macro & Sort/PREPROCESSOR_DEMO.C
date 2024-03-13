//  define constant demo using prepcroessor

#include<stdio.h>
#define PI 3.14
int main()
{
    float radius;
    printf("\n Enter the radius of the circle\n");
    scanf("%d",&radius);
    float area= PI * radius * radius;
    printf("\n The are of the circle is: %f \n",area);
    
}

