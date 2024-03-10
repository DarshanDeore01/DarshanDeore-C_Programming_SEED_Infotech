#include<stdio.h>
void acceptArray(int arr[] ,int);
void displayArray(int arr[],int);
int main()
{
    int size,counter;
    printf("\n Enter the size of arrray");
    scanf("%d",&size);
    int arr[size];
   acceptArray(arr,size);
   displayArray(arr,size);
}
void acceptArray(int arr[], int size)
{
   int counter;
    for(counter=0;counter<size;counter=counter+1)
    {
        printf("\n Enter the %d element of arrray",counter+1);
        scanf("%d",&arr[counter]);
    }
}

void displayArray(int arr[], int size)
{
    int counter_2;
    for(counter_2=0;counter_2<size;counter_2=counter_2+1)
    {
        
        printf("Element %d: %d\n", counter_2 + 1, arr[counter_2]);
        
    }


} 