#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    printf("x>5 && y>5: %d\n", x>5 && y>5);
    printf("x>5 || y>5: %d\n", x>5 || y>5);
    printf("!(x>5 || y>5): %d", !(x>5 || y>5));

    return 0;
}