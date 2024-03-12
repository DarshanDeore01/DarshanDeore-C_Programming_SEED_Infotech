#include<stdio.h>
int arrSearch(int[], int, int);
int main()
{
    int arr[5]={10,20,30,40,50};
    int num_to_find,result=10;
    result=arrSearch(arr,num_to_find,result);
    if(result>=0)
    {
        printf("\n The element is found at: %d",*(&result));
    }
    else
    {
        printf("\n The element is not found  \n");
    }


}

int arrSearch(int arr[], int num_to_find, int result)
{
    int counter;
    for(counter=0;counter<5;counter=counter+1)
    {
        if(num_to_find==arr[counter])
        {
                 result=counter;
                 return result;
        }
        

    }

}