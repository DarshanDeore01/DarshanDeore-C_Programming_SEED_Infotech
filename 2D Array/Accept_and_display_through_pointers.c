#include <stdio.h>
#define Size 100

void accept(int (*)[Size], int, int);
void display(int (*)[Size], int, int);

int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows > Size || cols > Size)
    {
        printf("Size of array exceeds limit.\n");
        return 1;
    }

    int arr[Size][Size];

    accept(arr, rows, cols);
    display(arr, rows, cols);

    return 0;
}


void accept(int (*arr)[Size], int rows, int cols)
{
    printf("Enter %d elements for the array:\n", rows * cols);
    for (int i = 0; i < rows; i=i+1)
    {
        for (int j = 0; j < cols; j=j+1)
        {
            scanf("%d", &arr[i][j]); 
        }
    }
}

void display(int (*arr)[Size], int rows, int cols)
{
    printf("The array elements are:\n");
    for (int i = 0; i < rows; i=i+1)
    {
        for (int j = 0; j < cols; j=j+1)
        {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
}
