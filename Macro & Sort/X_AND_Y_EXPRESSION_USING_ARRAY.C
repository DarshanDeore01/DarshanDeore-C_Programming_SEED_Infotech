#include <stdio.h>

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 110};
    int z[10];
    int counter;

    for (counter = 0; counter < 10; counter = counter + 1) {
        z[counter] = x[counter] * x[counter] + y[counter] * y[counter];
    }

    for (counter = 0; counter < 10; counter = counter + 1) {
        printf("%d ", z[counter]);
    }

    return 0;
}
