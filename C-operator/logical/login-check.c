#include <stdio.h>

int main() {
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("User reguler: %d\n", isLoggedIn && !isAdmin);
    printf("Has acsess: %d\n", isLoggedIn || isAdmin);
    printf("Nor Logged in: %d", !isLoggedIn);

    return 0;
}