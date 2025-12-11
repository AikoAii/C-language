#include <stdio.h>

int main() {
    int myNum = 10;

    if (myNum > 0) {
        printf("Positive number\n");
    } else if (myNum < 0) {
        printf("Negative number\n");
    } else {
        printf("The number is zero\n");
    }

    return 0;
}