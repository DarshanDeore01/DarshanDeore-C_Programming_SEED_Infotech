#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_2[5];
    int counter;

    
    for (counter = 4; counter >= 0; counter=counter-1) {
        arr_2[4 - counter] = arr[counter]; 
        printf("\nThe %d element is %d\n", 5 - counter, arr_2[4 - counter]); 
    }

    return 0;
}