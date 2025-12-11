#include <stdio.h>

int main(){
    char frontName[] = "Aiko";
    char backName[] = "Takanashi";

    frontName[0] = 'C';
    printf("Hi, my name is %s %s", frontName, backName);

    return 0;
}