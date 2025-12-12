#include <stdio.h>


int main(){
    char username[30];
    int pin;

    printf("Enter your username: \n");
    scanf("%s", &username);

    printf("Enter your pin: \n");
    scanf("%d", &pin);

    printf("%s ", username);
    printf("%d", pin);

    return 0;
}