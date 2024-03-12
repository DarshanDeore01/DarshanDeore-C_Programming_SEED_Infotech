#include<stdio.h>
int main()
{
    int rainfall[5]={100,500,300,500,100};
    int counter;
    float avg_rainfall;
    for(counter=0;counter<5;counter=counter+1)
    {
        avg_rainfall=rainfall[counter]+avg_rainfall;
    }
    avg_rainfall=avg_rainfall/5;
    printf("\n The Average rainfall is %3.2f\n",avg_rainfall);
}