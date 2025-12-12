#include <stdio.h>

int main(){
    char name[] = "Bello:3";
    char bello[] = {'B', 'e', 'l', 'l', 'o', ':', '3'};

    printf("size: %zu\n", sizeof(name));
    printf("size: %zu", sizeof(bello));

    return 0;
}