#include <stdio.h>

#define ROWS 3
#define COLS 3

void accept(int arr[ROWS][COLS])
{
    printf("Enter %d elements for the array:\n", ROWS * COLS);
    for (int i = 0; i < ROWS; i=i+1)
    {
        for (int j = 0; j < COLS; j=j+1)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int arr[ROWS][COLS])
{
    printf("The array elements are:\n");
    for (int i = 0; i < ROWS; i=i+1)
    {
        for (int j = 0; j < COLS; j=j+1)
        {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
}

int main()
{
    int arr[ROWS][COLS];

    accept(arr);
    display(arr);

    return 0;
}
