#include <stdio.h>

int main() {
    int time = 15;/*condition1*/ 

    if (time < 6) {
        printf("Mie belum matang!");
    } else if (time > 6 ) {
        printf("Mie kematangan!");
    } else {
        printf("Mie sudah matang pas");
    }

    return 0;
}