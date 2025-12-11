#include <stdio.h>

int main() {
    int x = 5;

    int a = x+=5;
    int b = x-+5;
    int c = x/=2;
    int d = x*=2;
    int e = x%=2;
    int f = x&=2;
    int g = x|=2;
    int h = x^=2;
    int i = x>>=2;
    int j = x<<=2;

    printf("x+=5: %d\n", a);
    printf("x-+5: %d\n", b);
    printf("x/=2: %d\n", c);
    printf("x*=2: %d\n", d);
    printf("x%=2: %d\n", e);
    printf("x&=2: %d\n", f);
    printf("x|=2: %d\n", g);
    printf("x^=2: %d\n", h);
    printf("x>>=2: %d\n",i );
    printf("x<<=2: %d\n", j);

    return 0;
}