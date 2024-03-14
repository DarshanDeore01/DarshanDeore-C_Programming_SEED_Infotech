#include <stdio.h>
#define Size 100
int count_occurences(char[], char);
int count_blankSpaces(char[]);
int count_words(char[]);
int count_vowels(char[]);

// Function to count occurences in a string

int count_occurences(char string[], char target)
{
    int count = 0;
    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] == target)
            count = count + 1;
        i = i + 1;
    }

    return count;
}

// Function to count blankSpaces in a string

int count_blankSpaces(char string[])
{
    int count = 0;
    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] == ' ')
            count = count + 1;
        i = i + 1;
    }

    return count;
}

// Function to count words in a string

int count_words(char string[])
{
    int count = 0;
    int i = 0;
    char prevChar = ' ';

    while (string[i] != '\0')
    {
        if ((string[i] != ' ' && string[i] != '\n' && string[i] != '\t') && prevChar == ' ')
        {
            count = count + 1;
        }
        prevChar = string[i];
        i = i + 1;
    }

    return count;
}

// Function to count Total NO. Of VOWELS in a string

int count_vowels(char string[])

{
    int count = 0;
    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            count = count + 1;
        }
        i = i + 1;
    }

    return count;
}

int main()
{
    char string[Size];

    printf("Enter a string: ");
    gets(string);

    printf("a. Number of occurrences of 'D' in the string: %d\n", count_occurences(string, 'D'));
    printf("b. Number of blank spaces in the string: %d\n", count_blankSpaces(string));
    printf("c. Number of words in the string: %d\n", count_words(string));
    printf("d. Total number of vowels in the string: %d\n", count_vowels(string));

    printf("\n\n");
    return 0;
}
