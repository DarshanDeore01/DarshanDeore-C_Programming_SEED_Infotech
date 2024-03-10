#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter Value of a");
    scanf("%d",&a);
    b=++a;
    printf("\n\nPre Increment the value is %d \n\n", a);
    b=a++;
    printf("\n\n Post Increment the value is %d \n\n", b);

}