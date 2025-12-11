#include <stdio.h>

int main() {
    int age = 30;
    char name[] = "Aiko"; // array character string
    
    printf("--- Variable Size Memory ---\n");
    
    // variable size
    printf("Variable 'age' (int): %zu byte\n", sizeof(age)); //4 byte

    // array size
    printf("Variable 'name' (String): %zu byte\n", sizeof(name)); //5 byte

    return 0;
}