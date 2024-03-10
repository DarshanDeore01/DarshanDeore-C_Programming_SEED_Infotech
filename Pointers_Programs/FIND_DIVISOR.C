#include<stdio.h>
int divisor(int);
int main()
{
    int num,result;
    printf("\n Enter the number to check if divisible by 5\n");
    scanf("%d",&num);
    result=divisor(num);

    if(result==1){
        printf("\n %d is divisible by 5\n",num);
    }
    else{
        printf("\n The number is not divisble by 5");
    }
}
int divisor(int num)
{
    int flag;
    if(num%5==0){
        flag=1;
    }
    else{
        flag=0;
    }
    return flag;
}