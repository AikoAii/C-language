#include <stdio.h>

int main() {
    //This can be done with the const keyword, which makes a variable unchangeable and read-only:

    const int num = 5; //will always be 15
    num = 6; //error: assignment of read-only variable 'myNum'

    printf("num");

    return 0;

}