#include <stdio.h>

int main() {
    int result1 = 2 + 3 * 4; //2 + 12 = 14
    int result2 = (1 + 2) * 5; //3 * 5 = 15

    printf("2+3*4: %d\n", result1);
    printf("(1+2)*5: %d", result2);

    //Always use parentheses ( ) if you want to make sure the calculation is done in the order you expect. It also makes your code easier to read.

    return 0;
}