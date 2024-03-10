#include<stdio.h>

int main() {
    printf("Enter the sales: ");
    float sales, total_amt;
    scanf("%f", &sales);

    if(sales >= 5000 && sales < 7500) {
        total_amt = sales * 0.03;
        printf("\nThe commission on %.2f sales is: 3 percent and you will receive: %.2f\n\n", sales, total_amt);
    }
    else if(sales >= 7501 && sales < 10500) {
        total_amt = sales * 0.08;
        printf("\nThe commission on %.2f sales is: 8 percent and you will receive: %.2f\n\n", sales, total_amt);
    }
    else if(sales >= 10501 && sales < 15000) {
        total_amt = sales * 0.11; 
        printf("\nThe commission on %.2f sales is: 11 percent and you will receive: %.2f\n\n", sales, total_amt);
    }
    else if(sales >= 15000) {
        total_amt = sales * 0.015;
        printf("\nThe commission on %.2f sales is: 15 percent and you will receive: %.2f\n\n", sales, total_amt);
    }
    else {
        printf("The amount entered is invalid\n");
    }

    return 0;
}
