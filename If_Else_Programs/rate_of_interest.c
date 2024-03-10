#include<stdio.h>
int main()
{

    int age;
    char gender;

    printf("\nEnter the age");
    scanf("%d",&age);

    printf("\nEnter the gender (m/f): ");
    scanf(" %c",&gender);

    if(age>=60)
    {
        printf("\n The rate of interest is: \t 8%");
    }

    else{

        if (gender == 'f')
        {
            printf("\n The rate of interest is: \t 7%");
        }

       else{
            printf("\n The rate of interest is: \t 9%");
       } 

    }

}



   

