#include <stdio.h>

int main(){
    int num = 1;

    printf("%p", &num); //output hexadecimal
    //To access it, use the reference operator (&), and the result represents where the variable is stored:

    //You should also note that &myAge is often called a "pointer". A pointer basically stores the memory
    //address of a variable as its value. To print pointer values, we use the %p format specifier.

    
    return 0;
}