#include<stdio.h>
int power(int,int);
int main()
{
    int number,power_2,result;
    printf("\n Enter the number \n");
    scanf("%d",&number);

    printf("\n Enter the power \n");
    scanf("%d",&power_2);

    result=power(number,power_2);
    printf("%d",result);

}
int power(int number, int power_2)
{
    int result=1;
     for (int i = 0; i < power_2; i++) {
        result *= number; 
    }
    
    return result;
}