#include <stdio.h>
#include <string.h>
# define Size 100

void substr(char src[], int start, int length, char dest[])
{
    int i;

    for (i = 0; i < length && src[start + i] != '\0'; i = i + 1)
    {
        dest[i] = src[start + i];
    }

    dest[i] = '\0';
}

int main()
{
    char str[Size], sub[Size];
    int start, length;

    printf("Enter a string: ");
    gets(str);
    
    int newline_index = strcspn(str, "\n"); 
    if (str[newline_index] == '\n')
    {                             
        str[newline_index] = '\0'; 
    }

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    substr(str, start, length, sub);
    printf("Substring: %s\n", sub);

    return 0;
}
