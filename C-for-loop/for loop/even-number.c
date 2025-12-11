#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 10; i += 5) {
        printf("Even number: %d\n", i * 2);
    }
    return 0;
}