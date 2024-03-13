#include<stdio.h>
void display(int[],int);
void accept(int[],int);
void sort(int[],int);
int main()
{
    int i = 0 , j = 0 , size;
    printf("\n Enter the size of the array \n");
    scanf("%d",&size);
    int arr[size];
    accept(arr,size);
    printf("\n The array before sorting is: \n");
    display(arr,size);
    sort(arr,size);

}

void display(int arr[],int size)
{
    int counter;
    for(counter=0;counter<size;counter++)
    {
        printf("\t%d ",arr[counter]); 
    }
}

void accept(int arr[],int size)
{
    int counter;
    for(counter=0;counter<size;counter++)
    {
        printf("\n Enter the %d element \n",counter);
        scanf("%d",&arr[counter]);
    }
}

void sort(int arr[], int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        }
    printf("\n The sorted array is: ");
    display(arr,size);

    }

    