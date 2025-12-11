#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    int length = sizeof(array) / sizeof(array[0]);

    printf("total size: %d", length);

    return 0;
}