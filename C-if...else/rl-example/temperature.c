#include <stdio.h>

int main() {
    int temperature = 30;

    if (temperature < 0) {
        printf("It's Freezing!\n");
    } else if (temperature < 20) {
        printf("It's cool");
    } else {
        printf("It's warm");
    }

    return 0;
}