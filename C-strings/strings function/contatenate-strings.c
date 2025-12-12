#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Bello ";
    char str2[] = "World:3";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    //print str1
    printf("%s", str1);

    return 0;


}