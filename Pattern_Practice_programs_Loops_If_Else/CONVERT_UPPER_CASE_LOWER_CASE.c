#include<stdio.h>
int main()
{
    char ch, conv;
    printf("\n Enter the charcater\n");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
       
        printf("\n The given character is %c is already Capital Character",ch);

    }
    else
    {
        conv=ch-32;
        printf("\n The given character is %c and its Capital Character is %c its ACII value is %d",ch,conv,ch);
        
    }
}