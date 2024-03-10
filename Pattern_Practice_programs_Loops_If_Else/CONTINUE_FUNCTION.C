#include<stdio.h>

int main() {
    int counter, num = 10;

    for(counter = 1; counter <= num; counter = counter + 1) {
        if(counter % 5 == 0)
            continue;
        printf("%d ", counter);
    }

    return 0;
}
