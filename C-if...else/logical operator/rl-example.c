#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = higest

    if (isLoggedIn && (isAdmin || securityLevel < 5)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

}