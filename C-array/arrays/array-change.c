#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5};

    printf("before: %d\n", array[3]);

    array[3] = 12; //change from 4 to 12
    printf("after: %d", array[3]);

    return 0;
}