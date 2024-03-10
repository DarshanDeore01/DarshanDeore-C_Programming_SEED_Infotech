#include<stdio.h>
void areaCircum(float,float*,float*);
void areaPeri(float,float,float*,float*);
int main()
{
    int choice;
    printf("\n Enter the choice \n 1: Cricle \n 2: Rectangle \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        float radius,circumference,area_1;
        printf("\n Enter the radius\n");
        scanf("%f",&radius);
        areaCircum(radius,&circumference,&area_1);
        printf("\n The area is: %f",area_1);
        printf("\n The circumference is: %f",circumference);

        break;

        case 2:
        float width,length,perimeter,area_2;
        printf("\n Enter the width\n");
        scanf("%f",&width);
        printf("\n Enter the length\n");
        scanf("%f",&length);
        areaPeri(width,length,&perimeter,&area_2);
        printf("\n The area is: %f",area_2);
        printf("\n The perimeter is: %f",perimeter);
        areaPeri(width,length,&perimeter,&area_2);
        
        break;
        
        default:
        printf("\n Invalid Data Entered\n");

    }

}


void areaCircum(float radius, float *circumference, float *area_1)
{
        const float pi=3.14;
        *circumference= 2*pi*radius;
        *area_1=pi*radius*radius;

}

void areaPeri(float width,float length,float *perimeter,float *area_2)
{
    *area_2=width*length;
    *perimeter=2*(length+width);
}