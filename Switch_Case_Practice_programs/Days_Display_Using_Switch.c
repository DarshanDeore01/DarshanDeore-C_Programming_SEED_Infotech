#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd, mm, yyyy;
    char ch1, ch2, ch3;

    printf("\n Enter the Date in DD/MM/YYYY Format: ");
    scanf("%d%c%d%c%d", &dd, &ch1, &mm, &ch2, &yyyy);

    switch (mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days in the month: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in the month: 30\n");
            break;
        case 2:
            // Checking for leap year
            if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0))
                printf("Number of days in the month: 29 (Leap year)\n");
            else
                printf("Number of days in the month: 28 (Non-leap year)\n");
            break;
        default:
            printf("Invalid month entered.\n");
    }

    return 0;
}
