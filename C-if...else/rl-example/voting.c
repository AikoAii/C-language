#include <stdio.h>

int main() {
    int myAge = 18;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote\n");
    } else {
        printf("Not old enough to vote\n");
    }

    return 0;
}