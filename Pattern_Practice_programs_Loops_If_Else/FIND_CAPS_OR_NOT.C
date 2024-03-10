#include<stdio.h>
int main()
 {

    char ch;
    printf("\nEnter the character\n");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n The given character is %c and its Capital Character its ACII value is %d",ch,ch);
    }
    else
    {
        printf("\n Its not a capital character");
    }
}



