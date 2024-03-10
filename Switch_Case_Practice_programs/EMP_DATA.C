#include<stdio.h>
int main()
{
    int empid,dept_no;
    char design_code;

    printf("\n Enter the empid\n");
    scanf("%d",&empid);

    printf("\n Enter the department no\n");
    scanf("%d",&dept_no);

    printf("\n Enter the design code\n");
    scanf(" %c",&design_code);
    
    switch(dept_no)
    {

    case 10:
    printf("\n\n Emp id %d works in Purchase Department",empid);
    break;

    case 20:
    printf("\n\n Emp id %d works in Sales",empid);
    break;

    case 30:
    printf("\n\n Emp id %d works in Production",empid);
    break;

    case 40:
    printf("\n\n Emp id %d works in Marketing",empid);
    break;

    case 50:
    printf("\n\n Emp id %d works in Accounts",empid);
    break;

    default:
        printf("Invalid data entered.\n");
    }

     switch(design_code)
    {

    case 'M':
    printf("\n\n Emp id %d work as a Manager\n\n",empid);
    break;

    case 'A':
    printf("\n\n Emp id %d works as a Analyst\n\n",empid);
    break;

    case 'W':
    printf("\n\n Emp id %d works as a Worker\n\n",empid);
    break;

    case 'S':
    printf("\n\n Emp id %d works as a Sales Perosn\n\n",empid);
    break;

    case 'C':
    printf("\n\n Emp id %d works as a Clerk\n\n",empid);
    break;

    

    default:
        printf("Invalid data entered.\n");
    }

    printf("Good Bye\n");
}