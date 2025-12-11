#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};

    printf("size: %zu", sizeof(array)); // 4 x 5 (4 bytes x 5 elements) = 20 bytes.

    return 0;
}