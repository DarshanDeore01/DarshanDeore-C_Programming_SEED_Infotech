#include<stdio.h>
int main()
{
    char mar_status;
    char sex;
    int age;

    printf("\n\nEnter the maritial status wither M- Married else U- Unmmaried\n\n");
    scanf(" %c",&mar_status);

    printf("\n\nEnter the sex wither M- Male else F- Female\n\n");
    scanf(" %c",&sex);

    printf("\n\nEnter the age\n\n");
    scanf("%d",&age);

    if(mar_status=='M')
    {
        printf("\n\nThe drivers is elgible to be insured\n\n");
    }
    else if(mar_status=='U' && age>=30 && sex=='M')
    {
        printf("\n\nThe drivers is elgible to be insured\n\n");
    }
    else if(mar_status=='U' && age>=25 && sex=='F')
    {
        printf("\n\nThe drivers is elgible to be insured\n\n");
    }
    else
    {
        printf("\n\nThe drivers is not elgible to be insured\n\n");
    }
    
}