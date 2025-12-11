#include <stdio.h>

int main() {
    int myAge = 17; //value is 17
    int age;

    myAge = 18; //value change to 18
    age = myAge; //copy value from another variable

    printf("The value: %d\n", myAge);
    printf("copy value: %d", age);

    return 0;
}