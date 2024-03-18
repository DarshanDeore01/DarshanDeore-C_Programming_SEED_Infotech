#include <stdio.h>
#define ROWS 3
#define COLS 3

void accept_matrix(int[ROWS][COLS]);
void display_matrix(int[ROWS][COLS]);
void transpose_matrix(int[ROWS][COLS], int[ROWS][COLS]);
void add_matrices(int[ROWS][COLS], int[ROWS][COLS], int[ROWS][COLS]);

void accept_matrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i = i + 1)
    {
        for (int j = 0; j < COLS; j = j + 1)
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transpose_matrix(int matrix[ROWS][COLS], int transpose[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i = i + 1)
    {
        for (int j = 0; j < COLS; j = j + 1)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void add_matrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i = i + 1)
    {
        for (int j = 0; j < COLS; j = j + 1)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void display_matrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i = i + 1)
    {
        for (int j = 0; j < COLS; j = j + 1)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], transpose[ROWS][COLS], result[ROWS][COLS];

    printf("Enter the elements of the first matrix:\n");
    accept_matrix(matrix1);
    printf("The first matrix is:\n");
    display_matrix(matrix1);

    transpose_matrix(matrix1, transpose);
    printf("The transpose of the first matrix is:\n");
    display_matrix(transpose);

    printf("Enter the elements of the second matrix:\n");
    accept_matrix(matrix2);
    printf("The second matrix is:\n");
    display_matrix(matrix2);

    add_matrices(matrix1, matrix2, result);
    printf("The result of adding the two matrices is:\n");
    display_matrix(result);

    return 0;
}
