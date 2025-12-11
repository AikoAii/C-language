#include <stdio.h>

int main() {
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("Float: %f\n", myFloatNum);
    printf("Double: %lf\n", myDoubleNum);

    //If you want to remove the extra zeros (set decimal precision), 
    //you can use a dot (.) followed by a number that specifies how many 
    //digits that should be shown after the decimal point:
    printf("default: %f\n", myFloatNum);
    printf("1 digit: %.1f\n", myFloatNum);
    printf("2 digit: %.2f\n", myFloatNum);
    printf("3 digit: %.3f\n", myFloatNum);
    printf("4 digit: %.4f", myFloatNum);

    return 0;
}