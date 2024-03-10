#include<stdio.h>
int main()
{
    char ch, conv;
    printf("\n Enter the charcater\n");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z')
    {
       
        printf("\n The given character is %c is already Small Character",ch);

    }
    else
    {
        conv=ch+32;
        printf("\n The given character is %c and its small Character is %c its ACII value is %d",ch,conv,ch);
        
    }
}