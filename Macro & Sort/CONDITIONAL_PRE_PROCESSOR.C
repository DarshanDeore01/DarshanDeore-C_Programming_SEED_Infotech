#include<stdio.h>
#define TEST PI 3.14
int main()
{
    #ifdef TEST
    {
        printf("\n The Preprocessor is defined \n");
    }

    #endif 

}
