#include<stdio.h>
int main()
{
    const float pi=3.14;
    float radius, area_of_circle, height, base, area_of_triangle, r_height, r_base, r_area_of_rectangle, perimeter_of_rectangle, perimeter_of_triangle, third_side_of_triangle;

    printf("\n\nEnter the Radius of Circle\n\n");
    scanf("%f",&radius);
    area_of_circle=pi*radius*radius;
    printf("\n\nThe area of circle is %f\n\n", area_of_circle);
    
    printf("\n\nEnter the Height of Rectangle\n\n");
    scanf("%f",&height);
    printf("\n\nEnter the base of Rectangle\n\n");
    scanf("%f",&base);
    area_of_triangle=0.5*base*height;
    printf("\n\nThe area of triangle is %f\n\n", area_of_triangle);

    printf("\n\nEnter the Height of Rectangle\n\n");
    scanf("%f",&r_height);
    printf("\n\nEnter the base of Rectangle\n\n");
    scanf("%f",&r_base);
    r_area_of_rectangle=r_base*r_height;
    printf("\n\nThe area of rectangle is %f \n\n", r_area_of_rectangle);

    perimeter_of_rectangle=(2*r_base)*(2*r_height);
    printf("\n\nThe perimeter of rectangle is %f \n\n", perimeter_of_rectangle);
    
    printf("\n\n Enter the third side of Triangle\n\n");
    scanf("%f",&third_side_of_triangle);
    perimeter_of_triangle=third_side_of_triangle+height+base;
    printf("\n\nThe perimeter of triangle is %f \n\n", perimeter_of_triangle);

}