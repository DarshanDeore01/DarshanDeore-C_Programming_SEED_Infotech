#include <stdio.h>

int main() {
    float year_1_aggr, year_2_aggr, year_3_aggr, avg_aggr;

    printf("Enter the aggregate marks of year 1: ");
    scanf("%f", &year_1_aggr);

    printf("Enter the aggregate marks of year 2: ");
    scanf("%f", &year_2_aggr);

    printf("Enter the aggregate marks of year 3: ");
    scanf("%f", &year_3_aggr);

    avg_aggr = (year_1_aggr + year_2_aggr + year_3_aggr) / 3.0;

    if (avg_aggr >= 80.00 && avg_aggr <= 100.00) {
        printf("\nThe candidate has secured grade: A\n\n");
    }
    else if (avg_aggr >= 60.00 && avg_aggr < 80.00) {
        printf("\nThe candidate has secured grade: B\n\n");
    }
    else if (avg_aggr >= 50.00 && avg_aggr < 60.00) {
        printf("\nThe candidate has secured grade: C\n\n");
    }
    else if (avg_aggr >= 40.00 && avg_aggr < 50.00) {
        printf("\nThe candidate has secured grade: D\n\n");
    }
    else {
        printf("The candidate has failed.\n");
    }

    return 0;
}
