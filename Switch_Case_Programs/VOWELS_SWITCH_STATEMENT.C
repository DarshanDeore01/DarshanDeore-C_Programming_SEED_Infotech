#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character to check if its vowel or not\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
        printf("\nThe given character %c is a vowel\n", ch);
            break; 
        default:
            printf("\nThe given character %c is not a vowel\n", ch);

    }
}