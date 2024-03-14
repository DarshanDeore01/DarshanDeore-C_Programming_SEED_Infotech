#include <stdio.h>
void inputStudentData(char[][50], int[][5]);
void calculateAggregate(int[][5], int[]);
char calculateGrade(int);
void displayMarksheet();

int main()
{
    char names[5][50];
    int marks[5][5];
    int aggregate[5];

    inputStudentData(names, marks);

    calculateAggregate(marks, aggregate);

    displayMarksheet(names, marks, aggregate);

    return 0;
}

void inputStudentData(char names[][50], int marks[][5])
{
    for (int i = 0; i < 5; i=i+1)
    {                                              
        printf("Enter name of student %d: ", i + 1); 
        scanf("%s", names[i]);                       

        printf("Enter marks for Marathi Hindi English Science and Mathematics (out of 100) for %s: ", names[i]); 
        for (int j = 0; j < 5; j=j+1)
        {                              
            scanf("%d", &marks[i][j]); 
        }
    }
}


void calculateAggregate(int marks[][5], int aggregate[])
{
    for (int i = 0; i < 5; i= i + 1)
    {                     
        aggregate[i] = 0; 
        for (int j = 0; j < 5; j=j+1)
        {                                
            aggregate[i] += marks[i][j]; 
        }
        aggregate[i] = (aggregate[i] * 100) / 500;
    }
}


char calculateGrade(int aggregate)
{
    if (aggregate < 35)      
        return 'F';         
    else if (aggregate < 60) 
        return 'D';          
    else if (aggregate < 75) 
        return 'C';          
    else if (aggregate < 90) 
        return 'B';          
    else                     
        return 'A';          
}


void displayMarksheet(char names[][50], int marks[][5], int aggregate[])
{
    printf("\nMarksheet:\n");
    printf("Name\t\tMarathi\t\tHindi\t\tEnglish\t\tScience\t\tMath\t\tAggregate\tGrade\n"); 
    for (int i = 0; i < 5; i= i + 1)
    {                            
        printf("%s\t\t", names[i]); 
        for (int j = 0; j < 5; j++)
        {                                
            printf("%d\t\t", marks[i][j]);
        }
        printf("%d\t\t%c\n", aggregate[i], calculateGrade(aggregate[i])); 
    }
}


