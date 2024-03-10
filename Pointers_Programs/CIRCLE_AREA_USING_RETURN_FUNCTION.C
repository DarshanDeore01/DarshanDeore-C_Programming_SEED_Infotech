    #include<stdio.h>
    int area(int);
    int main()
    {
        int radius,result_2;
        printf("\n Enter the radius \n");
        scanf("%d",&radius);
        result_2=area(radius);
        printf("%d",result_2);
    }  

    int area(int radius)
    {
        int result=1;
        const float pi=3.14;
        result=pi*radius*radius;
        return result;
    }