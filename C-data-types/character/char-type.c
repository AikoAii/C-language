#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Grade: %c", grade);

    //you can use ASCII values to display certain characters.
    char a = 65, b = 66, c = 67;
    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    //If you try to store more than a single character, it will only print the last character:
    // char h = 'Hello World'; 
    // printf("%d", h);

    //To store multiple characters (or whole words), use strings (which you will learn more about in a later chapter):
    char myText[] = "Hello";
    printf("\n%s", myText);
    return 0;
}