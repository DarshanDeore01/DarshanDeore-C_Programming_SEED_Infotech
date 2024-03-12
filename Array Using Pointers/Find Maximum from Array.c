#include<stdio.h>
void accept(int arr[], int size);
void find_max(int arr[], int size);
int main()
{
    int size;
    printf("\n Enter the size of the array \n");
    scanf("%d",&size);
    int arr[size];
    accept(arr,size);
    find_max(arr,size);
    
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

void find_max(int arr[], int size)
{
    int counter_2=0;
    int max=arr[0];
    for(counter_2;counter_2<size;counter_2=counter_2+1)
    {
        if(max<arr[counter_2])
        {
            max=arr[counter_2];
        }
    }
    printf("\n The maximum number in the given array is: %d",max);
}