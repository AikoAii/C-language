/*
Data Type	  Size
int	          2 or 4 bytes
float      	  4 bytes
double	      8 bytes
char	      1 byte
*/

#include <stdio.h> 

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    // use %zu format specifier to print result
    //To actually get the size (in bytes) of a data type or variable, use the sizeof operator:
    printf("int memory size: %zu\n", sizeof(myInt));
    printf("float memory size: %zu\n", sizeof(myFloat));
    printf("double memory size: %zu\n", sizeof(myDouble));
    printf("char memory size: %zu\n", sizeof(myChar));

    return 0;
}