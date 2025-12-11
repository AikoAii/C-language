#include <stdio.h>

int main() {
    int sum1 = 100 + 50; // 150
    int sum2 = sum1 + 100; // 150 + 100 = 250
    int sum3 = sum1 + sum2; //150 + 250 = 400

    printf("sum1: %d\n", sum1);
    printf("sum2: %d\n", sum2);
    printf("sum3: %d\n", sum3);

    return 0;
}