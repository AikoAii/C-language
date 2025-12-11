#include <stdio.h>

int main() {
    int matrix[2][3] = 
    { {1,4,3}, 
    {4,6,12} };
    int i, j;
    
    //loop
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }


    return 0;
}