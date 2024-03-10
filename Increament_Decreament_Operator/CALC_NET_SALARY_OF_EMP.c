#include<stdio.h>
int main()
{
    float basic_salary, HRA, DA, PF, Gross_Salary, net_salary;

    printf("Enter the basic salary");
    scanf("%f",&basic_salary);
    
    HRA= 0.2*basic_salary;
    DA= 0.4*basic_salary;
    PF=0.1*basic_salary;

    Gross_Salary=HRA+DA+basic_salary;
    printf("\n\nThe Gross Salary is:\t %6.1f", Gross_Salary);
    net_salary=Gross_Salary-PF;
    printf("\n\nThe Net Salary is:\t %6.1f", net_salary);


}