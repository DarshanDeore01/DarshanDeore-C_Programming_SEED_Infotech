#include <stdio.h>

int main() {
    int choice,qty;
    float total = 0;

    do {
        printf("\n");
        printf("Welcome to Hotel Menu\n");
        printf("1. Burger - Rs.50.00\n");
        printf("2. Pizza - Rs.80.00\n");
        printf("3. Pasta - Rs.60.00\n");
        printf("4. Sandwich - Rs.100.00\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\n Enter the quantity to order:\n");
                scanf("%d",&qty);
                total = total + 50.00*qty;
                printf("Burger added to your order.\n");
                break;
            case 2:
                total = total + 80.00*qty;
                printf("Pizza added to your order.\n");
                break;
            case 3:
                total = total + 60.00*qty;
                printf("Pasta added to your order.\n");
                break;
            case 4:
                total = total + 100.00*qty;
                printf("Sandwich added to your order.\n");
                break;
            case 5:
                printf("Thank you for your order!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while(choice != 5);

    printf("Your total bill is: Rs.%.2f\n", total);

    return 0;
}
