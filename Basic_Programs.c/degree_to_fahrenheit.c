#include<stdio.h>
int  main()
{
    float celcius;
    float fahrenheit;
    printf("Enter the number to convert to celcius");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("The %f fahrenheit is %f celcius", celcius,fahrenheit);

}