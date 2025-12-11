#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 18;
    bool isCitizen = true;

    if (age >= 18) {
        if (isCitizen) {
            printf("And you are a citizen, so you can vote!\n");
        } else {
            printf("But you must be a citizen to vote.");
        }
    } else {
        printf("Not old enough to vote");
    }

    return 0;

}