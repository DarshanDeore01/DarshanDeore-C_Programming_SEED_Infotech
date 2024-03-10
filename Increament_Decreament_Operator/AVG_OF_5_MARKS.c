#include<stdio.h>
int main()
{
    int Maths, English, Hindi, Marathi, Geography;
    float avg;

    printf("Enter Marks of Maths");
    scanf("%d",&Maths);

    printf("Enter Marks of English");
    scanf("%d",&English);

    printf("Enter Marks of Hindi");
    scanf("%d",&Hindi);

    printf("Enter Marks of Marathi");
    scanf("%d",&Marathi);

    printf("Enter Marks of Geography");
    scanf("%d",&Geography);

    avg= (float)(Maths+English+Marathi+Hindi+Geography)/5;
    printf("\nThe Average is\n %3.2f",avg);

}