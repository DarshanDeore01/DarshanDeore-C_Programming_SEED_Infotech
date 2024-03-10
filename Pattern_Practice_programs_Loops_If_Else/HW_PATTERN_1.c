// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",i+0);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",64+i);
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=3;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("%d", count++);
        }
        printf("\n");
    }
}
