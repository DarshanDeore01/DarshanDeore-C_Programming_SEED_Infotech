#include<stdio.h>
void fibonacci(int);
int main()
{
    int num;
    printf("\n Enter the number upto which you want series");
    scanf("%d",&num);
    fibonacci(num);
}
void fibonacci(int num)
{
    int first = 0, second = 1, next, counter;
    
       for (counter = 0; counter < num; counter++){
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;
            
        }
        
    }

