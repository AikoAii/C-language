#include <stdio.h>

int main() {
    int array[] = {1, 2, 3.14, 4, 5.2}; //cannot mix different type data

    printf("%d\n", array[2]); //3
    printf("%d", array[4]); // 5

    return 0;

}