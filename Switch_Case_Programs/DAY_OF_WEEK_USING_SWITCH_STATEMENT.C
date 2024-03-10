#include<stdio.h>
int main()
{
    int day_no;
    printf("\n Enter the number of the day we which we want to know the day\n");
    scanf("%d",&day_no);

    switch(day_no)
    {
    case 1:
    printf("\n The day of the week is: Monday\n");
    break;

    case 2:
    printf("\n The day of the week is: Tuesday\n");
    break;

    case 3:
    printf("\n The day of the week is: Wednesday\n");
    break;

    case 4:
    printf("\n The day of the week is: Thursday\n");
    break;

    case 5:
    printf("\n The day of the week is: Friday\n");
    break;

    case 6:
    printf("\n The day of the week is: Saturday\n");
    break;

    case 7:
    printf("\n The day of the week is: Sunday\n");
    break;


    default:
    printf("\n Invaild Option!!!\n");
    }
}