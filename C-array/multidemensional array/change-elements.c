#include <stdio.h>

int main() {
    int matrix[2][3] = 
    { {1,2,3}, 
    {4,5,6} };
    matrix[1][2] = 45;

    printf("matrix: %d", matrix[1][2]); //45

    return 0;
}