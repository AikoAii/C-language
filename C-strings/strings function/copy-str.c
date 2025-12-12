#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Bello ";
    char str2[20];

    // Copy str1 to str2
    strcpy(str2, str1);

    //print str1
    printf("%s", str2);

    return 0;


}