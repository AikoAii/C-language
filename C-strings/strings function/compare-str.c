#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Bello";
    char str2[] = "Bello";
    char str3[] = "Yahoo";

    //compare str 1 and str2
    printf("%d\n", strcmp(str1, str2)); //string equal

    //compare str1 and str3
    printf("%d\n", strcmp(str1, str3)); //string not equal

    return 0;
}