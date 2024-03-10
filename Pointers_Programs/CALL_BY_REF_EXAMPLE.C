#include<stdio.h>
int main()
{
    int number=30;
    int *num=&number;

    printf("\n The value of number varible is: %d",number);
    printf("\n The address is: %d",&number);

    printf("\n The value of pointer varible is: %d",*num);
    printf("\n The address is: %d",&num);

    printf("\n The value of address stored in pointer varible is: %d",num);
    
    

    
}