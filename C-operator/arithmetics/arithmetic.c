#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    printf("x+y: %d\n", x + y); //7
    printf("x-y: %d\n", x - y); //3
    printf("x*y: %d\n", x * y); //10
    printf("x/y: %d\n", x / y); //2.5
    printf("x%y: %d\n", x % y); //1
    printf("x++: %d\n", x++); //6
    printf("y--: %d\n", --y); //1

    //use float
    double a = 10.0;
    double b = 3.0;

    printf("a / b: %f", a / b);

    return 0;

}