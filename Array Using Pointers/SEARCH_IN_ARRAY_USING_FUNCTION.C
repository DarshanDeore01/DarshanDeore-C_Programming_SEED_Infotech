#include<stdio.h>
void accept(int arr[], int size);
int arrSort(int[],int,int);
int main()
{
    int size,num_to_find;
    printf("\n Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    accept(arr,size);
    printf("\n Enter the number to search:");
    scanf("%d",&num_to_find);
    arrSort(arr,num_to_find,size);
}
int arrSort(int arr[],int num_to_find,int size)
{
    int temp,counter;
    temp=num_to_find;
    for(counter=0;counter<=size;counter=counter+1)
    {
        if(temp==arr[counter])
        {
                printf("\n The element is found at the position %d \n",counter+1);
                break;
        }
        

    }

         printf("\n The element is not found \n");
        
}

void accept(int arr[], int size)
{
    int counter=0;
    for(counter;counter<size;counter=counter+1)
    {
        printf("\n Enter the %d element of arrray",counter+1);
        scanf("%d",&arr[counter]);
        
    }
}   