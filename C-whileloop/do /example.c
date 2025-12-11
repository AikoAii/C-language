#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("Hidup jokowi\n");
        i++;
    } while (i < 5); //Do not forget to increase the variable used in the condition, otherwise the loop will never end!

    return 0;
}