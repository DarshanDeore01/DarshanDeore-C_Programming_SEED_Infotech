#include<stdio.h>
int main()
{
    int arr[5]={10,15,30,55,100};
    int counter;
    for(counter=0;counter<5;counter=counter+1)
    {
        arr[counter]=arr[counter]*3;
        printf("\n The multiplication is: %d \n",arr[counter]);
    }
    
    
}   