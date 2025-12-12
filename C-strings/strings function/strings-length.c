#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("length: %zu\n", strlen(alphabet));
    
    //Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:
    printf("size: %zu", sizeof(alphabet));

    return 0;
}